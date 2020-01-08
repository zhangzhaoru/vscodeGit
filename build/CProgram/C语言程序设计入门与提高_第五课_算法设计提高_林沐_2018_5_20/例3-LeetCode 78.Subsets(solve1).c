#include <stdio.h>

void generate(int i, int nums[], int numsSize,
			  int item[], int itemSize,
			  int **result, int columnSizes[], int *returnSize){
	if (i >= numsSize){
		return;
	}
	item[itemSize] = nums[i];
	itemSize++;
	columnSizes[*returnSize] = itemSize;	
	int j;
	for (j = 0; j < itemSize; j++){
		result[*returnSize][j] = item[j];
	}
	(*returnSize)++;	
	generate(i + 1, nums, numsSize, item,
		itemSize, result, columnSizes, returnSize);	
	itemSize--;
	generate(i + 1, nums, numsSize, item,
		itemSize, result, columnSizes, returnSize);
}


int** subsets(int* nums, int numsSize, int** columnSizes, int *returnSize) {
    int item[20] = {0};
    int max_size = 1 << numsSize;
    int **result = (int **)malloc(sizeof(int *) * max_size);
	*columnSizes = (int *)malloc(sizeof(int *) * max_size);
	int i;
	for (i = 0; i < max_size; i++){
		(*columnSizes)[i] = 0;
		result[i] = (int *)malloc(sizeof(int) * 20);
	}
    *returnSize = 1;
    generate(0, nums, numsSize, item, 0, result, *columnSizes, returnSize);
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
