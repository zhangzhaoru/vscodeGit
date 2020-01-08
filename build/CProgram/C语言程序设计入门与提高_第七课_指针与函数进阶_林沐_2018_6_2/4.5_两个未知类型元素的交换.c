#include <stdio.h>

void swap(char *a, char *b, int width){
	char tmp;
	while(width){
		tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
		width--;
	}
}

int main(){
	int a = 5;
	int b = 10;
	char str1[10] = "abcde";
	char str2[10] = "xxx";
	printf("a = %d b = %d\n", a, b);
	printf("str1 = %s str2 = %s\n", str1, str2);
	swap((char *)&a, (char *)&b, sizeof(int));
	swap(str1, str2, sizeof(str1));
	printf("a = %d b = %d\n", a, b);
	printf("str1 = %s str2 = %s\n", str1, str2);
	return 0;
}


