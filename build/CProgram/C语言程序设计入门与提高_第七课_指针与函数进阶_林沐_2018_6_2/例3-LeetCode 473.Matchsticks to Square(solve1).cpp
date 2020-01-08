#include <stdio.h>
#include <stdlib.h>

bool generate(int i, int nums[], int numsSize, int target, int bucket[]){
	if (i >= numsSize){
		return bucket[0] == target && bucket[1] == target 
			&& bucket[2] == target && bucket[3] == target;
	}
	int j;
	for (j = 0; j < 4; j++){
		if (bucket[j] + nums[i] > target){
			continue;
		}
		bucket[j] += nums[i];
		if (generate(i + 1, nums, numsSize, target, bucket)){
			return true;
		}
		bucket[j] -= nums[i];
	}
	return false;
}


int int_cmp(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}
bool makesquare(int* nums, int numsSize) {
    if (numsSize < 4){
   		return false;
    }
    int sum = 0;
    int i;
    for (i = 0; i < numsSize; i++){
   		sum += nums[i];
    }
    if (sum % 4){
   		return false;
	}
	qsort(nums, numsSize, sizeof(int), int_cmp);
 	int bucket[4] = {0};
  	return generate(0, nums, numsSize, sum / 4, bucket);
}

int main(){
	int nums[] = {1, 1, 2, 4, 3, 2, 3};
	printf("%d\n", makesquare(nums, 7));
	return 0;
}

