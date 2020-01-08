#include <stdio.h>
int main(){
	int number1;
	int number2;
	int *pointer1 = &number1;
	int *pointer2 = &number2;
	int **p_pointer = &pointer2;
	printf("Please input two numbers:\n");
	scanf("%d %d", pointer1, *p_pointer);
	printf("number1 = %d, number2 = %d\n", number1, number2);
	*pointer1 = 999;
	**p_pointer = 100;
	printf("number1 = %d, number2 = %d\n", number1, number2);
	printf("pointer2 point value = %d (number2)\n", *pointer2);
	*p_pointer = &number1;
	printf("pointer2 point value = %d (number1)\n", *pointer2);
	return 0;
}

