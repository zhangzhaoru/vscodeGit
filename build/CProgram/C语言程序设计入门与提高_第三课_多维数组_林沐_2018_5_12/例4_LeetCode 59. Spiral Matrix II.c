#include <stdio.h>

#define RIGHT 0
#define DOWN 1
#define LEFT 2
#define UP 3

int** generateMatrix(int n) {
	int **array = (int **)malloc(sizeof(int *) * n);
	int i, j;
	for (i = 0; i < n; i++){
		array[i] = (int *)malloc(sizeof(int) * n);
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			array[i][j] = 0;
		}
	}
    int direction = RIGHT;
	int m = n * n;
	int x = 0;
	int y = 0;
	for (i = 1; i <= m; i++){
		array[x][y] = i;
		if (direction == RIGHT){
			if (y + 1 == n || array[x][y+1] != 0){
				x++;
				direction = DOWN;
			}
			else{
				y++;
			}
		}
		else if (direction == DOWN){
			if (x + 1 == n || array[x+1][y] != 0){
				y--;
				direction = LEFT;
			}
			else{
				x++;
			}
		}
		else if (direction == LEFT){
			if (y == 0 || array[x][y-1] != 0){
				x--;
				direction = UP;
			}
			else{
				y--;
			}
		}
		else if (direction == UP){
			if (x == 0 || array[x-1][y] != 0){
				y++;
				direction = RIGHT;
			}
			else{
				x--;
			}
		}
	}	
	return array;
}

int main(){
	int **array = NULL;
	int n = 5;
	int i, j;
	array = generateMatrix(n);
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("%-4d", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

