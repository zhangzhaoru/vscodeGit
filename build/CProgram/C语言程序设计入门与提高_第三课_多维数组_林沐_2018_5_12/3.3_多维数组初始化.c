#include <stdio.h>

int main(){
	int number[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	int number2[3][5] = {0};
	int number3[2][3][5] = {
		{
			{1, 2, 3, 4, 5},
			{6, 7, 8, 9, 10},
			{11, 12, 13, 14, 15}
		},
		{
			{10, 20, 30, 40, 50},
			{60, 70, 80, 90, 100},
			{110, 120, 130, 140, 150}
		}
	};
	int i, j, k;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			for (k = 0; k < 5; k++){
				printf("%d ", number3[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}	
	return 0;
}

