#include <stdio.h>

int compute_2D_array_sum(int array[][10], int n, int m){
	int i, j;
	int sum = 0;
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			sum += array[i][j];
		}
	}
	return sum;
}

int compute_3D_array_sum(int array[][10][10], int n, int m, int p){
	int i, j, k;
	int sum = 0;
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			for (k = 0; k < p; k++){
				sum += array[i][j][k];
			}
		}
	}
	return sum;
}

int main(){
	int a_2d[10][10] = {0};
	int a_3d[10][10][10] = {0};
	int n, m;
	int x, y, z;
	int i, j, k;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &a_2d[i][j]);
		}
	}
	printf("2d array sum = %d\n", compute_2D_array_sum(a_2d, n, m));
	scanf("%d %d %d", &x, &y, &z);
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			for (k = 0; k < z; k++)
				scanf("%d", &a_3d[i][j][k]);
		}
	}
	printf("3d array sum = %d\n", compute_3D_array_sum(a_3d, x, y, z));
	return 0;
}

