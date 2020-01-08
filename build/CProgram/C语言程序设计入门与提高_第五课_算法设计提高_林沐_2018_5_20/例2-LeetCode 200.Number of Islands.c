#include <stdio.h>
#include <stdlib.h>

#define MAXN 500
void DFS(int mark[][MAXN], char **grid,
		 int gridRowSize, int gridColSize,
		 int x, int y){
	mark[x][y] = 1;
	static const int dx[] = {-1, 1, 0, 0};
	static const int dy[] = {0, 0, -1, 1};
	int i;
	for (i = 0; i < 4; i++){
		int newx = dx[i] + x;
		int newy = dy[i] + y;
		if (newx < 0 || newx >= gridRowSize ||
			newy < 0 || newy >= gridColSize){
			continue;
		}
		if (mark[newx][newy] == 0 && grid[newx][newy] == '1'){
			DFS(mark, grid, gridRowSize, gridColSize, newx, newy);
		}
	}
}

int numIslands(char **grid, int gridRowSize, int gridColSize) {
    int island_num = 0;
    int mark[MAXN][MAXN] = {0};
    int i, j;
    for (i = 0; i < gridRowSize; i++){
   		for (j = 0; j < gridColSize; j++){
   			if (mark[i][j] == 0 && grid[i][j] == '1'){
    			DFS(mark, grid, gridRowSize, gridColSize, i, j);
	    		island_num++;
	    	}
    	}
    }
	return island_num;
}

int main(){
	char **grid;
	char str[10][10] = {"11100", "11000", "00100", "00011"};
	int i, j;
	grid = (char **)malloc(sizeof(char *) * 10);
	for (i = 0; i < 4; i++){
		grid[i] = (char *)malloc(sizeof(char) * 10);
		for (j = 0; j < 5; j++){
			grid[i][j] = str[i][j];
		}
	}
	printf("%d\n", numIslands(grid, 4, 5));
	for (i = 0; i < 10; i++){
		free(grid[i]);
	}
	free(grid);
	return 0;
}

