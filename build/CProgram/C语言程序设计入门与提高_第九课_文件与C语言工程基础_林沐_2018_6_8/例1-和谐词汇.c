#include <stdio.h>
#include <string.h>

#define MAX_WORD_NUM 100
#define MAX_WORD_LEN 50
#define MAX_FILE_LEN 12000

int read_hexie_files(FILE *fp_hexie,
					 char hexie[][MAX_WORD_LEN]){	
	int cnt = 0;
	while(fgets(hexie[cnt], MAX_WORD_LEN, fp_hexie)){
		int len = strlen(hexie[cnt]);
		hexie[cnt][len-1] = '\0';
		cnt++;
	}
	return cnt;
}

int read_file_files(FILE *fp_file, char file[]){
	int ch = fgetc(fp_file);
	int file_len = 0;
	while(ch != EOF){
		file[file_len++] = ch;
		ch = fgetc(fp_file);
	}
	return file_len;
}


int is_in_hexie_dict(const char *word,
					 char hexie[][MAX_WORD_LEN], int n){
	int i;
	for (i = 0; i < n; i++){
		if (strcmp(word, hexie[i]) == 0){
			return 1;
		}
	}
	return 0;
}

int is_prefix(const char *str, const char *prefix){
	int i = 0;
	while(str[i] && prefix[i]){
		if (str[i] != prefix[i]){
			return 0;
		}
		i++;
	}
	if (prefix[i]){
		return 0;
	}
	return 1;
}

int is_a_prefix_in_hexie_dict(const char *word,
							  char hexie[][MAX_WORD_LEN], int n){
	int i;
	for (i = 0; i < n; i++){
		if (is_prefix(hexie[i], word)){
			return 1;
		}
	}
	return 0;
}

void word_copy(char *word, char *begin, char *end){
	while(begin <= end){
		*word = *begin;
		begin++;
		word++;
	}
	*word = '\0';
}

int main(){
	FILE *fp_hexie = fopen("hexie.txt", "r");
	FILE *fp_file = fopen("file.txt", "r");
	FILE *fp_new = fopen("new.txt", "w");
	
	char hexie[MAX_WORD_NUM][MAX_WORD_LEN];	
	int word_cnt = read_hexie_files(fp_hexie, hexie);
	
	char file[12000] = {0};	
	int file_len = read_file_files(fp_file, file);
	
	char *begin = file;
	char *end = file;
	char temp_word[100] = {0};
	while(*end){
		word_copy(temp_word, begin, end);
		if (is_in_hexie_dict(temp_word, hexie, word_cnt)){
			fprintf(fp_new, "!@#$%%^&*");
			begin = end + 1;
		}
		else{
			if (!is_a_prefix_in_hexie_dict(temp_word, hexie, word_cnt)){
				fprintf(fp_new, "%c", *begin);
				begin++;
				word_copy(temp_word, begin, end);
				if (is_in_hexie_dict(temp_word, hexie, word_cnt)){
					fprintf(fp_new, "!@#$%%^&*");
					begin = end + 1;
				}
			}
		}
		end++;
	}
	while(*begin){
		fprintf(fp_new, "%c", *begin);
		begin++;
	}
	fclose(fp_hexie);
	fclose(fp_file);
	fclose(fp_new);
	return 0;
}

