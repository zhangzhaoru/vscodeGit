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

int compute_func(int (*p_func)(int, int), int x, int y){
	return p_func(x, y);
}

int main(){
	int a = 5;
	int b = 8;
	int result;
	
	result = compute_func(sum, a, b);
	printf("sum = %d\n", result);
	
	result = compute_func(difference, a, b);
	printf("difference = %d\n", result);
	
	result = compute_func(product, a, b);
	printf("product = %d\n", result);
	
	return 0;
}

