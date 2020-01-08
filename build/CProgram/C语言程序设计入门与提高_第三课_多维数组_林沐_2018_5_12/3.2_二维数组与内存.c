#include <stdio.h>

int main(){
	int number[3][5];
	int count = 0;
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			number[i][j] = ++count;
		}
	}
	printf("number:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			printf("%p %d\t", &number[i][j], number[i][j]);
		}
	}
	for (i = 0; i < 3; i++){
		printf("number[%d]:%p\n", i, number[i]);
	}
	return 0;
}

