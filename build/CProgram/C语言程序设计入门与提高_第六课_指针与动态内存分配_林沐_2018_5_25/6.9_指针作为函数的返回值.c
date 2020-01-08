#include <stdio.h>
int *find_max(int array[], int n){
	int *max_pos = array;
	int i;
	for (i = 1; i < n; i++){
		if (*max_pos < array[i]){
			max_pos = array + i;
		}
	}
	return max_pos;
}
void find_max2(int array[], int n, int **max_pos){
	*max_pos = array;
	int i;
	for (i = 1; i < n; i++){
		if (**max_pos < array[i]){
			*max_pos = array + i;
		}
	}
}

int main(){
	int array[8] = {1, 7, 2, 3, 9, 6, 5, -2};
	int *max_pos1 = 0;
	int *max_pos2 = 0;
	int i;
	for (i = 0; i < 8; i++){
		printf("array[%d] = %d, address = %p\n",
				i, array[i], &array[i]);
	}
	max_pos1 = find_max(array, 8);
	find_max2(array, 8, &max_pos2);
	printf("max_pos1 pointed = %d, max_pos1 = %p\n",
										*max_pos1, max_pos1);
	printf("max_pos2 pointed = %d, max_pos2 = %p\n",
										*max_pos2, max_pos2);
	return 0;
}

