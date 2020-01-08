#include <stdio.h>

struct student{
	char name[10];
	int age;
	int score[3];
};
typedef struct student student;

int is_a_better_than_b(student a, student b){
	int i;
	int sum_a = 0;
	int sum_b = 0;
	for (i = 0; i < 3; i++){
		sum_a += a.score[i];
		sum_b += b.score[i];
	}	
	return sum_a > sum_b;
}

int is_a_better_than_b_2(student *a, student *b){
	int i;
	int sum_a = 0;
	int sum_b = 0;
	for (i = 0; i < 3; i++){
		sum_a += a->score[i];
		sum_b += a->score[i];
	}
	return sum_a > sum_b;
}

int main(){
	student s1 = {
		"LinMu",
		28,
		{80, 97, 71}
	};	
	student s2 = {
		"XiaoMing",
		25,
		{60, 85, 73}
	};	
	student s3 = {
		"Peter",
		26,
		{98, 91, 89}
	};	
	if (is_a_better_than_b(s1, s2)){
		printf("%s is better.\n", s1.name);
	}
	else{
		printf("%s is better.\n", s2.name);
	}	
	if (is_a_better_than_b_2(&s2, &s3)){
		printf("%s is better.\n", s2.name);
	}
	else{
		printf("%s is better.\n", s3.name);
	}	
	return 0;
}

