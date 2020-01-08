#include <stdio.h>

#include <string.h>
int longestPalindrome(char* s) {
    int char_map[128] = {0};
   	int max_length = 0;
   	int flag = 0;
   	int i;
   	int len = strlen(s);
   	for (i = 0; i < len; i++){
   		char_map[s[i]]++;
    }
    for (i = 0; i < 128; i++){
  		if (char_map[i] % 2 == 0){
   			max_length += char_map[i];
    	}
	    else{
  			max_length += char_map[i] - 1;
  			flag = 1;
   		}
   	}
   	return max_length + flag;
}

int main(){
	char s[] = "abccccddaa";
	printf("%d\n", longestPalindrome(s));
	return 0;
}

