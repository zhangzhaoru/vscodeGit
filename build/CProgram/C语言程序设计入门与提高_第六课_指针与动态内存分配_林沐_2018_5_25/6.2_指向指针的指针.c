#include <stdio.h>

int main(){
	int number = 5;
	int *pointer = &number;
	int **p_pointer = &pointer;
	int ***pp_pointer = &p_pointer;
	
	printf("number's address: %p\n", &number);
	printf("number's value: %d\n", number);
	printf("\n");
	printf("pointer's address: %p\n", &pointer);
	printf("pointer's value: %p\n", pointer);
	printf("pointer pointing value: %d\n", *pointer);
	printf("\n");
	printf("p_pointer's address: %p\n", &p_pointer);
	printf("p_pointer's value: %p\n", p_pointer);
	printf("p_pointer pointing value: %p\n", *p_pointer);
	printf("\n");
	printf("pp_pointer's address: %p\n", &pp_pointer);
	printf("pp_pointer's value: %p\n", pp_pointer);
	printf("pp_pointer pointing value: %p\n", *pp_pointer);
	printf("\n");
	printf("pointer,p_pointer,pp_pointer size = %d, %d, %d\n",	
			sizeof(pointer), sizeof(p_pointer), sizeof(pp_pointer));
	return 0;
}

