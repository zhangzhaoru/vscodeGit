#include <stdio.h>

#define MAXN 500000

bool makesquare(int* nums, int numsSize) {
	if (numsSize < 4){
		return false;
  	}
   	int sum = 0;
   	int i, j;
    for (i = 0; i < numsSize; i++){
   		sum += nums[i];
   	}
    if (sum % 4){
   		return false;
   	}
    int target = sum / 4;
    int ok_subset[MAXN] = {0};
    int ok_subset_len = 0;
    int ok_half[MAXN] = {0};
    int ok_half_len = 0;
    int all = 1 << numsSize;
    for (i = 0; i < all; i++){
   		int sum = 0;
    	for (j = 0; j < numsSize; j++) {
   			if (i & (1 << j)){
   				sum += nums[j];
    		}
      	}
       	if (sum == target){
       		ok_subset[ok_subset_len++] = i;
       	}
   	}
    for (i = 0; i < ok_subset_len; i++){
   		for (j = i + 1; j < ok_subset_len; j++){
    		if ((ok_subset[i] & ok_subset[j]) == 0){
    			ok_half[ok_half_len++] = ok_subset[i] | ok_subset[j];
      		}
        }
  	}
   	for (i = 0; i < ok_half_len; i++){
   		for (j = i + 1; j < ok_half_len; j++){
    		if ((ok_half[i] & ok_half[j]) == 0){
				return true;
   			}
      	}
  	}
   	return false;
}

int main(){
	int nums[] = {1, 1, 2, 4, 3, 2, 3};
	printf("%d\n", makesquare(nums, 7));
	return 0;
}

