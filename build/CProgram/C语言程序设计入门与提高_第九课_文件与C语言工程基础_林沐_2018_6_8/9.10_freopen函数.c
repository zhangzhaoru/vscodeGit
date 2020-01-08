#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[20];
	int id;
	int score[3];
	int sum;
};

typedef struct student student;

int student_cmp(const void *a, const void *b){
	student *s1 = (student *)a;
	student *s2 = (student *)b;
	if (s1->sum != s2->sum){
		return s2->sum - s1->sum;
	}
	return s1->id - s2->id;
}

int main(){
	freopen("文件的引入_data.in.txt", "r", stdin);
	freopen("文件的引入_data.out.txt", "w", stdout);
	
	student s[3000];
	int n;
	int i;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%s %d %d %d %d", s[i].name, &s[i].id,
			&s[i].score[0], &s[i].score[1], &s[i].score[2]);
		s[i].sum = s[i].score[0] + s[i].score[1] + s[i].score[2];
	}
	
	qsort(s, n, sizeof(s[0]), student_cmp);
	
	printf("%s\t%-15s%s\t%s\t%s\t%s\n", "id", "name", "sum",
				"score1", "score2", "score3");
	for (i = 0; i < n; i++){
		printf("%d\t%-15s%d\t%d\t%d\t%d\n",
				s[i].id, s[i].name, s[i].sum,
				s[i].score[0], s[i].score[1], s[i].score[2]);
	}
	
	return 0;
}



