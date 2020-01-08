#include <stdio.h>

void generate(int i, int nums[], int numsSize,
			  int item[], int itemSize,
			  int result[][10], int columnSizes[], int *returnSize){
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
}

int main(){
	int nums[] = {1, 2, 3};
	int item[10] = {0};
	int itemSize = 0;	
	int result[10][10] = {0};
	int returnSize = 0;
	int columnSizes[10] = {0};	
	int i, j;
	
	generate(0, nums, 3, item, 0, result, columnSizes, &returnSize);
	
	for (i = 0; i < returnSize; i++){
		for (j = 0; j < columnSizes[i]; j++){
			printf("[%d]", result[i][j]);
		}
		printf("\n");
	}
	return 0;
} 


