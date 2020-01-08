#include <stdio.h>
#define MAXN 100
int main(){
	int n, m;
	int matrix[MAXN][MAXN];
	int i, j;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}

