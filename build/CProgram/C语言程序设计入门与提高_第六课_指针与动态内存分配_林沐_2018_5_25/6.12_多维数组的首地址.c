#include <stdio.h>

int main(){
	int array[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9} 
	};
	int i, j;
	printf("array = %p\n", array);
	for (i = 0; i < 3; i++){
		printf("i = %d %p %p %p\n", i, array[i], array + i, *(array + i));
		for (j = 0; j < 3; j++){
			printf("[%d %d %d] ",
				array[i][j], *(array[i]+j), *(*(array + i)+ j));
		}
		printf("\n");
	}
	return 0;
}

