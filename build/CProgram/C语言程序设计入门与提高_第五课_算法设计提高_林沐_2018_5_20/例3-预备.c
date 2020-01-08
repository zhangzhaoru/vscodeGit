#include <stdio.h>

int main(){
	int nums[] = {1, 2, 3};
	int item[10] = {0};
	int itemSize = 0;	
	
	int result[10][10] = {0};
	int returnSize = 0;
	int columnSizes[10] = {0};
	
	int i, j;
	
	for (i = 0; i < 3; i++){
		item[itemSize] = nums[i];
		itemSize++;
		columnSizes[returnSize] = itemSize;
		for (j = 0; j < itemSize; j++){
			result[returnSize][j] = item[j];
		}
		returnSize++;
	}
	
	for (i = 0; i < returnSize; i++){
		for (j = 0; j < columnSizes[i]; j++){
			printf("[%d]", result[i][j]);
		}
		printf("\n");
	}
	return 0;
} 

