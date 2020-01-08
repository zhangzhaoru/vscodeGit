#include <stdio.h>

#include <string.h>

#define MAX_LEN 100
#define MAX_WORD_LEN 20

int split_word(const char line[], char word[][MAX_WORD_LEN], int word_cnt){
	char temp[MAX_WORD_LEN];
	int temp_len = 0;
	int i = 0;
	while(line[i]){
		if(line[i] >= 'a' && line[i] <= 'z'){
			temp[temp_len] = line[i];
			temp_len++;
		}
		else{
			if (temp_len){
				temp[temp_len] = '\0';
				strcpy(word[word_cnt], temp);
				word_cnt++;
				temp_len = 0;
			}
		}
		i++;
	}
	return word_cnt;
}

void sort_word(char word[][MAX_WORD_LEN], int word_cnt){
	int i, j;
	for (i = 0; i < word_cnt; i++){
		for (j = i + 1; j < word_cnt; j++){
			if (strcmp(word[i], word[j]) > 0){
				char temp[MAX_WORD_LEN];
				strcpy(temp, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], temp);
			}
		}
	}
}

int main(){
	char line[MAX_LEN];
	char word[MAX_LEN][MAX_WORD_LEN];
	int word_cnt = 0;	
	gets(line);
	while(line[0] != '#'){		
		word_cnt = split_word(line, word, word_cnt);
		gets(line);
	}
	sort_word(word, word_cnt);
	int i;
	for (i = 0; i < word_cnt; i++){
		printf("%s\n", word[i]);
	}
	return 0;
}

