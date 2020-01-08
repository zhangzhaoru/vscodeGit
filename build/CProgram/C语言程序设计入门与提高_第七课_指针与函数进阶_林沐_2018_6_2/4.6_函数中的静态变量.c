#include <stdio.h>

void func_test1(){
	int count = 0;
	count++;
	printf("func_test1 count = %d\n", count);
}

void func_test2(){
	static int count = 0;
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

