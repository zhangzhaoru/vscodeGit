#include <stdio.h>

void my_strcpy1(char to[], const char from[]){
	int i = 0;
	while(from[i]){
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}

void my_strcpy2(char *to, const char *from){
	while(*from){
		*to = *from;
		to++;
		from++;
	}
	*to = '\0';
}

int main(){
	char str[10] = "123456789";
	char str2_1[20] = "123456789123456789";
	char str2_2[20] = "123456789123456789";
	my_strcpy1(str2_1, str);
	my_strcpy2(str2_2, str);
	printf("str2_1 = [%s]\n", str2_1);
	printf("str2_2 = [%s]\n", str2_2);
	return 0;
}

