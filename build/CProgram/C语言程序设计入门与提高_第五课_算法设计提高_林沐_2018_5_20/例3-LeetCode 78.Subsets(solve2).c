#include <stdio.h>

int** subsets(int* nums, int numsSize, int** columnSizes, int *returnSize){
    int max_size = 1 << numsSize;
    int **result = (int **)malloc(sizeof(int *) * max_size);
	*columnSizes = (int *)malloc(sizeof(int *) * max_size);
	int i, j;
	for (i = 0; i < max_size; i++){
		(*columnSizes)[i] = 0;
		result[i] = (int *)malloc(sizeof(int) * 20);
	}
	*returnSize = 0;
	
	for (i = 0; i < max_size; i++){
		int item[20] = {0};
		int itemSize = 0;
		for (j = 0; j < numsSize; j++){
 			if (i & (1 << j)){
 				item[itemSize++] = nums[j];
   			}
	    }
	    (*columnSizes)[*returnSize] = itemSize;
		for (j = 0; j < itemSize; j++){
			result[*returnSize][j] = item[j];
		}
		(*returnSize)++;
 	}
	return result;
}

int main(){
	int nums[] = {1, 2, 3};
	int *columnSizes = 0;
	int returnSize = 0;
	int **result = subsets(nums, 3, &columnSizes, &returnSize);
	int i, j;
	for (i = 0; i < returnSize; i++){
		if (columnSizes[i] == 0){
			printf("[]");
		}
		for (j = 0; j < columnSizes[i]; j++){
			printf("[%d]", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}


