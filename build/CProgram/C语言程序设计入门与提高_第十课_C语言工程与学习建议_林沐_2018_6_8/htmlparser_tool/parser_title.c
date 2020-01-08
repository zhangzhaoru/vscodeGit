#include <stdio.h>
#include <string.h>
#include "gumbo.h"

void parser_title(const GumboOutput *output, char title[]){
    const GumboVector *children = &(output->root->v.element.children);
    GumboNode* head = NULL;
    int i;
    for (i = 0; i < children->length; i++) {
        GumboNode* child = children->data[i];
        if (child->type == GUMBO_NODE_ELEMENT &&
            child->v.element.tag == GUMBO_TAG_HEAD) {
            head = child;
            break;
        }
    }
    children = &(head->v.element.children);
    for (i = 0; i < children->length; i++) {
        GumboNode* child = children->data[i];
        if (child->type == GUMBO_NODE_ELEMENT &&
            child->v.element.tag == GUMBO_TAG_TITLE) {
            GumboNode *title_text = child->v.element.children.data[0];
            if (title_text->v.text.text){
                strcpy(title, title_text->v.text.text);
            }
        }
    }
}

char g_page[2 * 1024 * 1024] = {0};
int g_page_len = 0;

int read_page(const char *file_name){
    FILE *fp = fopen(file_name, "r");
    if (!fp){
        return -1;
    }
    int ch;
    ch = fgetc(fp);
    while(ch != EOF){
        g_page[g_page_len++] = ch;
        ch = fgetc(fp);
    }
    fclose(fp);
    return 0;
}

int main(int argc, char *argv[]){
    if (argc != 2){
        printf("usage : ./parser_title html\n");
        return -1;
    }
    if (read_page(argv[1]) != 0){
        printf("cannot open file %s.\n", argv[1]);
        return -1;
    }
    GumboOutput* output = gumbo_parse_with_options(
            &kGumboDefaultOptions, g_page, g_page_len);
    char title[10240] = {0};
    parser_title(output, title);
    printf("title = [%s]\n", title);
    return 0;
}
