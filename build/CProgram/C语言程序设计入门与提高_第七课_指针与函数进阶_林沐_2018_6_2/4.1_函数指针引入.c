#include <stdio.h>

int sum(int x, int y){
	return x + y;
}

int difference(int x, int y){
	return x - y;
}

int product(int x, int y){
	return x * y;
}

int main(){	
	int a = 5;
	int b = 8;
		
	int (*p_func)(int, int);
	printf("p_func sizeof = %d\n", sizeof(p_func));
	
	p_func = sum;
	
	
	printf("sum's address = %p\n", sum);
	printf("p_func = %p\n", p_func);	
	printf("sum = %d\n", p_func(a, b));
	
	p_func = difference;
	printf("difference = %d\n", p_func(a, b));
	
	p_func = product;
	printf("product = %d\n", p_func(a, b));	
	
	return 0;
}

