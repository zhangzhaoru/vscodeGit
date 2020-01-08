#include <stdio.h>
#include <stdlib.h>

int int_cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int double_cmp(const void *a, const void *b){
	return *(double *)a > *(double *)b ? 1 : -1;
}

int main(){
	int int_array[8] = {2, 50, 3, -7, 2, 9, 0, 0};
	double double_array[8] = {2.5, 13.12, -0.7, 0, -50, 9, -0.123, 0};
	int i;
		
	qsort(int_array, 8, sizeof(int), int_cmp);
	printf("int_array:\n");
	for (i = 0; i < 8; i++){
		printf("%d ", int_array[i]);
	}
	printf("\n\n");	
	qsort(double_array, 8, sizeof(double), double_cmp);
	printf("double_array:\n");
	for (i = 0; i < 8; i++){
		printf("%lf ", double_array[i]);
	}
	printf("\n\n");
	return 0;
}

