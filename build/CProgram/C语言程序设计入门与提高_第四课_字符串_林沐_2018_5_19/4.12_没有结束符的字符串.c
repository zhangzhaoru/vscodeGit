#include <stdio.h>
#include <string.h>

int main(){
	char str1[10] = "0123456789";
	char str2[10] = {'0', '1', '2', '3', '4'};	
	printf("str1 = %s strlen = %d\n", str1, strlen(str1));
	printf("str2 = %s strlen = %d\n", str2, strlen(str2));
	int i;
	for (i = 0; i < 10; i++){
		printf("i = %d [%c] [%c]\n", i, str1[i], str2[i]);
	}	
	return 0;
}

