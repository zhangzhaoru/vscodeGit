#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student1{
	char name[20];
	int age;
};

struct student2{
	char *name;
	int age;
};

typedef struct student1 student1;
typedef struct student2 student2;

int main(){
	char *name[3] = {
		"LinMu",
		"XiaoMing",
		"Peter"
	};
	
	student1 *s = malloc(sizeof(student1));
	strcpy(s->name, "Fangfang");
	s->age = 21;
	
	int i = 0;
	student1 *s2 = malloc(sizeof(student1) * 3);
	for (i = 0; i < 3; i++){
		strcpy(s2[i].name, name[i]);
		s2[i].age = 25 + i;
	}
	
	student1 *s3[3] = {0};	
	for (i = 0; i < 3; i++){
		s3[i] = malloc(sizeof(student1));
		strcpy(s3[i]->name, name[i]);
		s3[i]->age = 25 + i * 2;
	}
	
	student2 *s4 = malloc(sizeof(student2));
	s4->name = malloc(20 * sizeof(char));
	strcpy(s4->name, "Jim");
	s4->age = 20;
	
	printf("s %s %d\n\n", s->name, s->age);
	for (i = 0; i < 3; i++){
		printf("s2[%d] %s %d\n", i, s2[i].name, s2[i].age);
	}
	printf("\n");
	for (i = 0; i < 3; i++){
		printf("s3[%d] %s %d\n", i, s3[i]->name, s3[i]->age);
	}
	printf("\n");
	printf("s4 %s %d\n\n", s4->name, s4->age);
	
	free(s);
	free(s2);
	for (i = 0; i < 3; i++){
		free(s3[i]);
	}
	free(s4->name);
	free(s4);
	
	return 0;
}

