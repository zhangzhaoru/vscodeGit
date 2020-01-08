#include <stdio.h>

void fun(int (*ptr)[3]){
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			ptr[i][j] = 10;
		}
	}
}

void fun2(int ptr[]){
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			ptr[i*3+j] = 99;
		}
	}
}

int main(){
	int array[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int (*ptr)[3] = array;
	int *ptr2 = array;
	int i, j;
	printf("array:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("[%d %d]", ptr[i][j], ptr2[i * 3 + j]);
		}
		printf("\n");
	}
	fun(array);
	printf("array:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	fun2(array);
	printf("array:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

