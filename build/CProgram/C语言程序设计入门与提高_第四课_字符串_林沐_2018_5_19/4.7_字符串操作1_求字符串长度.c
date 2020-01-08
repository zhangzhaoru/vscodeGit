#include <stdio.h>
#include <string.h>

int my_strlen(const char *str){
	int i = 0;
	while(str[i]){
		i++;
	}
	return i;
}

int my_strlen_s(const char *str, int size){
	int i = 0;
	while(str[i] && i < size){
		i++;
	}
	return i;	
}

int main(){
	char str[10] = "123456789";
	printf("str = [%s]\n", str);
	printf("strlen = %d\n", strlen(str));
	printf("my_strlen = %d\n", my_strlen(str));
	printf("my_strlen_s = %d\n", my_strlen_s(str, sizeof(str)));
	
	char str2[5] = "123456789";
	printf("str2 = [%s]\n", str2);
	printf("strlen = %d\n", strlen(str2));
	printf("my_strlen = %d\n", my_strlen(str2));
	printf("my_strlen_s = %d\n", my_strlen_s(str2, sizeof(str2)));
	return 0;
}

