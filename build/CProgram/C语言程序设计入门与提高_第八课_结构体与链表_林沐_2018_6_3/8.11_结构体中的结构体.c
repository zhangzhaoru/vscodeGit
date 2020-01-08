#include <stdio.h>

struct subject{
	int math;
	int english;
	int chemistry;
};
typedef struct subject subject;

struct student{
	char name[10];
	int age;
	subject score;
};
typedef struct student student;


struct student2{
	struct subject2{
		int math;
		int english;
		int chemistry;
	};	
	char name[10];
	int age;
	struct subject2 score;
};

int main(){
	student s1 = {
		"LinMu",
		28,
		{80, 97, 71}
	};
	struct student2 s2 = {
		"XiaoMing",
		25,
		{60, 85, 73}
	};
	printf("name = %s, age = %d, M = %d E = %d C = %d\n",
		s1.name, s1.age, s1.score.math,
		s1.score.english, s1.score.chemistry);
		
	printf("name = %s, age = %d, M = %d E = %d C = %d\n",
		s2.name, s2.age, s2.score.math,
		s2.score.english, s2.score.chemistry);
	
	return 0;
}

