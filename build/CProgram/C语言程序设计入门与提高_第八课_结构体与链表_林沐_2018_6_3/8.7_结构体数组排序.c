#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int score;
};

typedef struct student student;

void swap(student *s1, student *s2){
	student temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int main(){
	student s[20];
	int n;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%s %d", s[i].name, &s[i].score);
	}
	
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if (s[i].score < s[j].score){
				swap(&s[i], &s[j]);
			}
			else if(s[i].score == s[j].score){
				if (strcmp(s[i].name, s[j].name) > 0){
					swap(&s[i], &s[j]);
				}
			}
		}
	}
	printf("sort:\n");
	for (i = 0; i < n; i++){
		printf("%s %d\n", s[i].name, s[i].score);
	}
	return 0;
}

