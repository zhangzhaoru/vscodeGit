#include <stdio.h>

int count = 0;

void func_test1(){
	count++;
	printf("func_test1 count = %d\n", count);
}

void func_test2(){
	count++;
	printf("func_test2 count = %d\n", count);
}

int main(){
	int i;
	for (i = 0; i < 5; i++){
		func_test1();
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		func_test2();
	}
	return 0;
}

