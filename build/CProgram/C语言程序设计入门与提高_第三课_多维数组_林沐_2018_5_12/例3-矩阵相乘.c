#include <stdio.h>

#define MAXN 100
void matrix_multipy(int A[][MAXN],
				int B[][MAXN], int C[][MAXN],
				int n, int m, int p){
	int i, j, k;
	for (i = 0; i < n; i++){
		for (j = 0; j < p; j++){
			C[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < p; j++){
			for (k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

int main(){
	int A[MAXN][MAXN];
	int B[MAXN][MAXN];
	int C[MAXN][MAXN];
	int n, m, p;
	int i, j;
	scanf("%d %d %d", &n, &m, &p);
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < p; j++){
			scanf("%d", &B[i][j]);
		}
	}
	matrix_multipy(A, B, C, n, m, p);
	for (i = 0; i < n; i++){
		for (j = 0; j < p; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
