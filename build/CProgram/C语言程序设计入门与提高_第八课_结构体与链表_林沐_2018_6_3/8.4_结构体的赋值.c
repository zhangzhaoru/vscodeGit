#include <stdio.h>
#include <string.h>

struct student{
	char name[10];
	int age;
	int score[3];
	double average;
};

typedef struct student student;

int main(){
	student s1 = {
		"LinMu",
		28,
		{80, 97, 71},
		0.0
	};
	student s2;
	strcpy(s2.name, "Xiaoming");
	printf("name = %s\n", s2.name);
	s2 = s1;
	printf("name = %s\n", s2.name);
	printf("age = %d\n", s2.age);
	printf("score = %d %d %d\n", s2.score[0], s2.score[1], s2.score[2]);
	return 0;
}

