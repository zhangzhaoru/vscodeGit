#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[20];
	int score;
};

typedef struct student student;

int student_cmp(const void *a, const void *b){
	student *s1 = (student *)a;
	student *s2 = (student *)b;
	if (s1->score != s2->score){
		return s2->score - s1->score;
	}
	return strcmp(s1->name, s2->name);
}

int main(){
	student s[20];
	int n;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%s %d", s[i].name, &s[i].score);
	}
	qsort(s, n, sizeof(s[0]), student_cmp);
	printf("sort:\n");
	for (i = 0; i < n; i++){
		printf("%s %d\n", s[i].name, s[i].score);
	}	
	return 0;
}

