#include <stdio.h>
int main(){
	int number[5] = {10, 20, 30, 40, 50};
	int *pointer = number;
	int i;
	printf("number = %p pointer = %p\n", number, pointer);
	printf("sizeof(number) = %d sizeof(pointer) = %d\n",
						sizeof(number), sizeof(pointer));
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("number[%d]'s address = %p\n", i, &number[i]);
		printf("pointer = %p pointer's value = %d\n", pointer, *pointer);
		pointer++;
	}
	printf("\n");	
	pointer = number;
	for (i = 0; i < 5; i++){
		printf("number[%d] = %d, %d\n", i, *(pointer + i), pointer[i]);
	}	
	return 0;
}

