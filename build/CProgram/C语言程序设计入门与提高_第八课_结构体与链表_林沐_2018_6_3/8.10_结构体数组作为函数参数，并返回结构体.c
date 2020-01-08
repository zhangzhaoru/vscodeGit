#include <stdio.h>

struct student{
	char name[10];
	int age;
	int score[3];
};

typedef struct student student;

student find_best_student(student s[], int n){
	student best;
	int max_score = -1;
	int i, j;
	for (i = 0; i < n; i++){
		int sum = 0;
		for (j = 0; j < 3; j++){
			sum += s[i].score[j];
		}
		if (max_score < sum){
			max_score = sum;
			best = s[i];
		}
	}
	return best;
}

student* find_best_student_2(student s[], int n){
	student *best;
	int max_score = -1;
	int i, j;	
	for (i = 0; i < n; i++){
		int sum = 0;
		for (j = 0; j < 3; j++){
			sum += s[i].score[j];
		}
		if (max_score < sum){
			max_score = sum;
			best = &s[i];
		}		
	}
	return best;
}

int main(){
	student s[3] = {
		{"LinMu", 28, {80, 97, 71}},
		{"XiaoMing", 25, {60, 85, 73}},
		{"Peter", 26, {98, 91, 89}}
	};
	student best = find_best_student(s, 3);
	student *best_ptr = find_best_student_2(s, 3);
	printf("best name = %s\n", best.name);
	printf("best name = %s\n", best_ptr->name);	
	return 0;
}

