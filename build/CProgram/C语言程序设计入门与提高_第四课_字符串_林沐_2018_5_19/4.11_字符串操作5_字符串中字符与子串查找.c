#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "abcabcdazzzzz";
	char str2[] = "abcd";
	char *strx = strchr(str1, 'c');
	char *stry = strstr(str1, str2);
	char *strz = strchr(str1, 'x');
	char *strw = strstr(str1, "vvv");
	printf("strx = %s\n", strx);
	printf("stry = %s\n", stry);
	printf("strz = %s\n", strz);
	printf("strw = %s\n", strw);
	return 0;
}

