#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int **number = (int **)malloc(sizeof(int *) * n);
	int i, j;
	for (i = 0; i < n; i++){
		number[i] = (int *)malloc(sizeof(int) * m);
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			number[i][j] = i * m + j;
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			printf("%d ", number[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < n; i++){
		free(number[i]);
	}
	free(number);
	return 0;
}

