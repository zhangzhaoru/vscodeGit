#include <stdio.h>

#include <stdlib.h>
int** matrixReshape(int **nums, int numsRowSize, int numsColSize
			, int r, int c, int** columnSizes, int* returnSize) {
				
	if (numsRowSize * numsColSize != r * c){
		r = numsRowSize;
		c = numsColSize;
	}
	
	int **new_array = (int **)malloc(sizeof(int *) * r);
	*columnSizes = (int *)malloc(sizeof(int) * r);
	*returnSize = r;	
	int i, j;
	for (i = 0; i < r; i++){
		new_array[i] = (int *)malloc(sizeof(int) * c);
		(*columnSizes)[i] = c;
	}
	
	int m = 0;
	int n = 0;
	for (i = 0; i < numsRowSize; i++){
		for (j = 0; j < numsColSize; j++){
			new_array[m][n] = nums[i][j];
			n++;
			if (n == c){
				n = 0;
				m++;
			}
		}
	}
	return new_array;
}

int main(){
	int **nums = (int **)malloc(sizeof(int *) * 3);
	int i, j;
	for (i = 0; i < 3; i++){
		nums[i] = (int *)malloc(sizeof(int) * 5);
		for (j = 0; j < 5; j++) {
			nums[i][j] = 5 * i + j;
		}
	}	
	int *columnSizes = 0;
	int returnSize = 0;	
	int **new_array = 
		matrixReshape(nums, 3, 5, 5, 3, &columnSizes, &returnSize);
	
	printf("nums:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	printf("new_array:\n");
	for (i = 0; i < returnSize; i++){
		for (j = 0; j < columnSizes[i]; j++){
			printf("%d ", new_array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

