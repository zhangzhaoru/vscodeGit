
#include <stdlib.h>
#include "sort.h"

static void swap(char *a, char *b, int width){
    char tmp;
    while(width){
        tmp = *a;
        *a = *b;
        *b = tmp;
        a++;
        b++;
        width--;
    }
}

void sort_array(void *base, int num, int width,
                int (*compare)(const void *, const void *)){
    int i, j;
    void *temp = malloc(width);
    for (i = 0; i < num; i++){
        for (j = i + 1; j < num; j++){          
            void *element1 = base + i * width;
            void *element2 = base + j * width;
            if (compare(element1, element2) > 0){
                swap(temp, element1, width);
                swap(element1, element2, width);
                swap(element2, temp, width);
            }
        }
    }
    free(temp);
}

