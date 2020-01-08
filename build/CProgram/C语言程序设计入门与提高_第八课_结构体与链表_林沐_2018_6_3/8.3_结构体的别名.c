#include <stdio.h>

struct student{
	char name[10];
	int age;
	int score[3];
	double average;
};

typedef struct student student;

int main(){
	typedef struct student ABC;
	student stu1 = {
		"LinMu",
		28,
		{80, 97, 71},
		0.0
	};
	ABC stu2 = {
		"bbb",
		0,
		{0},
		0.0
	};
	printf("%s %s\n", stu1.name, stu2.name);
	
	//typedef int DATA;	
	typedef double DATA;
	DATA num = 1.23;
	DATA num2 = 2.3;
	DATA num3 = 3.6;
	printf("num = %.2lf num2 = %.2lf num3 = %.2lf\n", num, num2, num3);
	return 0;
}

