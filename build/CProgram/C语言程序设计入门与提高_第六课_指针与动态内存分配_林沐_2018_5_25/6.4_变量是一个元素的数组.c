#include <stdio.h>

int main(){	
	int number = 0;
	int *pointer = &number;
	
	*pointer = 30;
	printf("number = %d\n", number);
	
	pointer[0] = 999;
	printf("number = %d\n", number);
	
	*&number = 100;
	printf("number = %d\n", number);
	
	(&number)[0] = 25;	
	printf("number = %d\n", number);
	
	return 0;
}


