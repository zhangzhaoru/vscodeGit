#include <stdio.h>

struct student{
	char name[10];
	int age;
	int score[3];
	double average;
};

typedef struct student student;

int main(){
	student s[3] = {
		{"LinMu", 28, {0}, 0.0},
		{"Xiaoming", 30, {0}, 0.0},
		{"Fangfang", 18, {0}, 0.0}
	};
	
	int i;
	for (i = 0; i < 3; i++){
		printf("name = %s, age = %d\n", s[i].name, s[i].age);
	}
	
	return 0;
}

