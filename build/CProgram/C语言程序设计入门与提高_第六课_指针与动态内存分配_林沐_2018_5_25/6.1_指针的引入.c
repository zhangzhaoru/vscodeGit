#include <stdio.h>

int main(){
	int number = 5;
	int *pointer = NULL;
	
	pointer = &number;
	
	printf("variable number's address: %p\n", &number);
	printf("variable number's value: %d\n", number);	
	printf("variable pointer's size: %d\n", sizeof(pointer));	
	printf("variable pointer's address: %p\n", &pointer);
	printf("variable pointer's value: %p\n", pointer);
	printf("variable pointer pointing value: %d\n", *pointer);
		
	*pointer = 999;
	
	printf("variable number's value: %d\n", number);
	
	return 0;
}

