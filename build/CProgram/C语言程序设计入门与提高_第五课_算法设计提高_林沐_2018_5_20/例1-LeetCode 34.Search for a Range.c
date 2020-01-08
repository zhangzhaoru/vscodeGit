#include <stdio.h>
#include <stdlib.h>

int left_bound(int nums[], int n, int target){
	int begin = 0;
	int end = n - 1;
	while(begin <= end){
		int mid = (begin + end) / 2;
		if (target == nums[mid]){
			if (mid == 0 || nums[mid -1] < target){
				return mid;
			}
			end = mid - 1;
		}
		else if (target < nums[mid]){
			end = mid - 1;
		}
		else if (target > nums[mid]){
			begin = mid + 1;
		}
	}
	return -1;
}

int right_bound(int nums[], int n, int target){
	int begin = 0;
	int end = n - 1;
	while(begin <= end){
		int mid = (begin + end) / 2;
		if (target == nums[mid]){
			if (mid == n - 1 || nums[mid + 1] > target){
				return mid;
			}
			begin = mid + 1;
		}
		else if (target < nums[mid]){
			end = mid - 1;
		}
		else if (target > nums[mid]){
			begin = mid + 1;
		}
	}
	return -1;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *result = (int *)malloc(sizeof(int) * 2);
    result[0] = left_bound(nums, numsSize, target);
    result[1] = right_bound(nums, numsSize, target);
    *returnSize = 2;
    return result;
}

int main(){
	int nums[] = {5, 7, 7, 8, 8, 8, 8, 10};
	int i;
	int *result;
	for (i = 0; i < 12; i++){
		int result_size = 0;
		result = searchRange(nums, 8, i, &result_size);
		printf("%d : [%d, %d]\n",i , result[0], result[1]);
	}
	free(result);
	return 0;
}

