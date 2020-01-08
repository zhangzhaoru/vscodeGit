#include <stdio.h>

#define MAXN 50

void put_down_the_queen(int x, int y,
						int mark[][MAXN], int n){
	static const int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
	static const int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
	mark[x][y] = 1;
	int i, j;
	for (i = 1; i < n; i++){
		for (j = 0; j < 8; j++){
			int new_x = x + i * dx[j];
			int new_y = y + i * dy[j];
			if (new_x >= 0 && new_x < n &&
				new_y >= 0 && new_y < n){
				mark[new_x][new_y] = 1;
			}
		}
	}
}

void copy_array(int mark1[][MAXN],int mark2[][MAXN], int n){
	int i, j;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			mark1[i][j] = mark2[i][j];
		}
	}
}

void backtracking(int k, int n, int mark[][MAXN], int *result){
	if (k == n){
		(*result)++;
		return;
	}
	int i;
	for (i = 0; i < n; i++){
		if (mark[k][i] == 0){
			int tmp_mark[MAXN][MAXN];
			copy_array(tmp_mark, mark, n);
			put_down_the_queen(k, i, mark, n);
			backtracking(k + 1, n, mark, result);
			copy_array(mark, tmp_mark, n);
		}
	}
}

int totalNQueens(int n) {
    int mark[MAXN][MAXN] = {0};
    int result = 0;
    backtracking(0, n, mark, &result);
    return result;
}

int main(){
	printf("%d\n", totalNQueens(8));
	return 0;
}
