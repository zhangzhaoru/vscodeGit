#include <stdio.h>

void fun(int num[], int n){
	int i;
	for (i = 0; i < n; i++){
		num[i] = 999;
	}
}

void fun2(int *num, int n){
	int i;
	for (i = 0; i < n; i++){
		num[i] = 100;
	}
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap2(int *x, int *y){
	int temp = x[0];
	x[0] = y[0];
	y[0] = temp;
}

void swap3(int x[], int y[]){
	int temp = x[0];
	x[0] = y[0];
	y[0] = temp;
}

int main(){
	int a[10] = {0};
	int b = 0;
	int i;	
	fun(&b, 1);
	fun2(a, 10);
	printf("a = ");
	for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("b = %d\n", b);	
	swap(a + 2, &b);
	printf("a = ");
	for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("b = %d\n", b);
	
	swap2(a + 2, &b);
	printf("a = ");
	for (i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("b = %d\n", b);
	
	return 0;
}

