#include <stdio.h>

int main(){
	int array[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};	
	int *ptr[3] = {0};
	int (*ptrx)[3] = NULL;
	printf("ptr sizeof = %d ptrx sizeof = %d\n",
							sizeof(ptr), sizeof(ptrx));
	int i, j;
	for (i = 0; i < 3; i++){
		ptr[i] = array[i];
	}
	printf("array:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	int **ptr2 = ptr;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			ptr2[i][j] = 100;
		}
	}
	printf("array:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

