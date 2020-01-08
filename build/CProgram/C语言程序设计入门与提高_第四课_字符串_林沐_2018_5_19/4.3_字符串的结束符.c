#include <stdio.h>

int main(){
	char ch = '\0';
	printf("ch = %d\n", ch);
	
	char str[20] = "I love\0coding.";
	printf("str = [%s]\n", str);
	
	int i = 0;
	while(str[i]){
		printf("[%c] : %d\n", str[i], str[i]);
		i++;
	}
	printf("\n");
	
	for (i = 0; i < 20; i++){
		printf("i = %d [%c][%d]\n", i, str[i], str[i]);
	}
	printf("\n");
	
	str[3] = '\0';
	printf("str = [%s]\n", str);
	
	printf("[%s]\n", &str[10]);
	
	return 0;
}

