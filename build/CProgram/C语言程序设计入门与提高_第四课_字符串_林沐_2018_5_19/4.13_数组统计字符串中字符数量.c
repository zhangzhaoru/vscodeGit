#include <stdio.h>
#include <string.h>

int main(){
	int char_map[128] = {0};
	char str[] = "abcdefgaaxxy";
	int len = strlen(str);
	int i;
	for (i = 0; i < len; i++){
		char_map[str[i]]++;
	}
	for (i = 0; i < 128; i++){
		if (char_map[i] > 0){
			printf("[%c][%d] : %d\n", i, i, char_map[i]);
		}
	}
	return 0;
}

