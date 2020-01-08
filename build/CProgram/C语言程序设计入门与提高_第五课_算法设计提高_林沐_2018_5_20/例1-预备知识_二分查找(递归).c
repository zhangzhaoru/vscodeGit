#include <stdio.h>

int binary_search(int sort_array[],
				   int begin, int end, int target){
	if (begin > end){
		return 0;
	}
	int mid = (begin + end) / 2;
	if (target == sort_array[mid]){
		return 1;
	}
	else if (target < sort_array[mid]){
		return binary_search(sort_array, begin, mid-1, target);
	}
	else if (target > sort_array[mid]){
		return binary_search(sort_array, mid + 1, end, target);
	}
}

int search_array(int sort_array[], int s_n, 
				  int random_array[], int r_n,
				  int result[]){
	int cnt = 0;
	int i;
	for (i = 0; i < r_n; i++){
		result[cnt++] = 
			binary_search(sort_array, 0, s_n, random_array[i]);
	}
	return cnt;
}

int main(){
	int A[] = {-1, 2, 5, 20, 90, 100, 207, 800};
	int B[] = {50, 90, 3, -1, 207, 80};
	int C[10] = {0};
	int C_n = search_array(A, 8, B, 6, C);
	int i;
	for (i = 0; i < C_n; i++){
		printf("%d\n", C[i]);
	}
	return 0;
}
