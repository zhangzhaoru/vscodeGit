#include <stdio.h>

struct student{
	char name[10];
	int age;
	int score[3];
	double average;
};

int main(){
	struct student stu = {
		"LinMu",
		28,
		{80, 97, 71},
		0.0
	};
	double sum = 0;
	int i;
	for (i = 0; i < 3; i++){
		sum += stu.score[i];
	}
	stu.average = sum / 3;
	
	printf("The student:\n");
	printf("name = %s\n", stu.name);
	printf("age = %d\n", stu.age);
	printf("scores: %d %d %d\n",
			stu.score[0], stu.score[1], stu.score[2]);
	printf("average = %.2lf\n", stu.average);
	return 0;
}

