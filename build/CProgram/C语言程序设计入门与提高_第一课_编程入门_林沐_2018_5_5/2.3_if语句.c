#include <stdio.h>

int main(){	
	int score;
	scanf("%d", &score);
	if (score >=90 && score <= 100){
		printf("Good job !\n");
	}
	printf("Your score is %d.\n", score);
	return 0;
}

