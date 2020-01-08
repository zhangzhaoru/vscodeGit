#include <stdio.h>

int *fun(){
	int number = 10;
	return &number;
}

int *fun2(){
	int number[10] = {1, 2, 3, 4 ,5, 6};
	return number;
}

int main(){
	int *pointer1 = fun();
	int *pointer2 = fun2();
	printf("%d %d\n", *pointer1, pointer2[2]);
	return 0;
}

