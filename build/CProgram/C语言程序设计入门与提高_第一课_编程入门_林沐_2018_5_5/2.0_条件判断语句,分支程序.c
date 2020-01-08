#include <stdio.h>

int main(){
	int score;
	char level;
	printf("Please input the score:\n");
	scanf("%d", &score);
	if (score < 0 || score > 100){
		printf("The score is out of range.\n");
	}
	else{
		if (score >= 90){
			level = 'A';
		}
		else if(score >= 80 && score < 90){
			level = 'B';
		}
		else if(score >= 70 && score < 80){
			level = 'C';
		}
		else if(score >= 60 && score < 70){
			level = 'D';
		}
		else if(score < 60){
			level = 'E';
		}
		printf("The level of the score is : %c.\n", level);
	}
	return 0;
}


