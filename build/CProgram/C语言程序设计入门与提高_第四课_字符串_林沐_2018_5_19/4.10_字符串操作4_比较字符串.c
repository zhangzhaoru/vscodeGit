#include <stdio.h>
#include <string.h>

int my_strcmp(const char *str1, const char *str2){
	int i = 0;
	while(str1[i] && str2[i] && str1[i] == str2[i]){
		i++;
	}
	if (str1[i] > str2[i]){
		return 1;
	}
	else if(str1[i] < str2[i]){
		return -1;
	}
	return 0;
}

int main(){
	char str1[] = "abcdef";
	char str2[] = "abcdazzzzz";
	char str3[] = "abcd";
	char str4[] = "abcdef";
	printf("strcmp(%s, %s) = %d\n",	str1, str2, strcmp(str1, str2));
	printf("my_strcmp(%s, %s) = %d\n", str1, str2, my_strcmp(str1, str2));
	printf("strcmp(%s, %s) = %d\n", str2, str1, strcmp(str2, str1));
	printf("my_strcmp(%s, %s) = %d\n", str1, str2, my_strcmp(str2, str1));
	printf("strcmp(%s, %s) = %d\n", str1, str3, strcmp(str1, str3));
	printf("my_strcmp(%s, %s) = %d\n", str1, str2, my_strcmp(str1, str3));
	printf("strcmp(%s, %s) = %d\n", str1, str4, strcmp(str1, str4));
	printf("my_strcmp(%s, %s) = %d\n", str1, str2, my_strcmp(str1, str4));
	return 0;
}

