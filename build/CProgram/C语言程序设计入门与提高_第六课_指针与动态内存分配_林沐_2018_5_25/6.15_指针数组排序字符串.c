#include <stdio.h>
#include <string.h>

void sort_str(char *str_array[], int str_n){
	int i, j;
	for (i = 0; i < str_n; i++){
		for (j = i + 1; j < str_n; j++){
			if (strcmp(str_array[i], str_array[j]) > 0){
				char* temp = str_array[i];
				str_array[i] = str_array[j];
				str_array[j] = temp;
			}
		}
	}
}

int main(){
	char str_array[8][100] = {
		"zzz",
		"zzzz",
		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
		"p",
		"abc",
		"ccckkk",
		"aaa",
		"mmwordilovecoding"
	};
	char *str_ptr[8] = {0};
	int i;
	for (i = 0; i < 8; i++){
		str_ptr[i] = str_array[i];
	}
	sort_str(str_ptr, 8);
	printf("str_array:\n");
	for (i = 0; i < 8; i++){
		printf("%s\n", str_array[i]);
	}
	printf("str_ptr:\n");
	for (i = 0; i < 8; i++){
		printf("%s\n", str_ptr[i]);
	}
	return 0;
}

