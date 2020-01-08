#include <stdio.h>

int main(){
	int number1 = 10;
	int number2 = 20;
	const int *pointer1 = &number1;
	printf("pointer1 points value: %d\n", *pointer1);
	pointer1 = &number2;
	printf("pointer1 points value: %d\n", *pointer1);
		
	int *const pointer2 = &number1;
	*pointer2 = 999;
	printf("number1 = %d\n", number1);
	
	const int *const pointer3 = &number2;
	printf("pointer3 points value: %d\n", *pointer3);
	return 0;
}

