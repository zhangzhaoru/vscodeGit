#include <stdio.h>
#include <stdlib.h>

int int_cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int int_array[8] = {2, 50, 3, -7, 2, 9, 0, 0};
	int key[5] = {3, 7, 9, 0 , 5};
	qsort(int_array, 8, sizeof(int), int_cmp);
	
	int i;
	printf("array:\n");
	for (i = 0; i < 8; i++){
		printf("%d %p\n", int_array[i], &int_array[i]);
	}
	printf("\n");
	printf("result:\n");
	for (i = 0; i < 5; i++){
		void *res = bsearch(&key[i], int_array, 8, sizeof(int), int_cmp);
		if (res){
			printf("%d %p\n", *(int *)res, res);
		}
		
	}
	return 0;
}

