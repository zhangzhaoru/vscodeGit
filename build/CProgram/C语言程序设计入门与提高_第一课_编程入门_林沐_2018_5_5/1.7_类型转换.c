#include <stdio.h>

int main(){
	int total_score = 200;
	double average1 = total_score / 3;
	double average2 = (double) total_score / 3;
	double average3 = total_score / 3.0;
	printf("average1 = %lf\n", average1);
	printf("average2 = %lf\n", average2);
	printf("average3 = %lf\n", average3);
	
	double test1 = total_score;
	int test2 = average2;
	printf("test1 = %lf, test2 = %d\n", test1, test2);
	
	return 0;
}

