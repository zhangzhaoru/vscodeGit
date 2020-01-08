#include <stdio.h>

int main(){
	int score1;
	int score2, score3;
	
	printf("Please input three scores:\n");
	scanf("%d %d %d", &score1, &score2, &score3);
	
	int sum = score1 + score2 + score3;
	double average = (double) sum / 3;
	
	printf("sum = %d\n", sum);
	printf("average = %.1lf\n", average);
	return 0;
}

