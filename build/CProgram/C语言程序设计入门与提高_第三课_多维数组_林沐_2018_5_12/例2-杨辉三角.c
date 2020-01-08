#include <stdio.h>

#define MAXN 15
int main(){
	int triangle[MAXN+1][MAXN+1] = {0};
	int i, j;
	triangle[1][1] = 1;
	for (i = 2; i <= MAXN; i++){
		for (j = 1; j <= i; j++){
			triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
		}
	}
	for (i = 1; i <= MAXN; i++){
		for (j = 1; j <= i; j++){
			printf("%-5d", triangle[i][j]);
		}
		printf("\n");
	}
	return 0;
}

