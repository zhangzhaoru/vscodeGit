#include <stdio.h>
#include <string.h>

struct student{
	char name[20];
	int score;
};

typedef struct student student;

int main(){
	student s;
	student *ptr = &s;
	
	strcpy(ptr->name, "LinMu");
	ptr->score = 85;
	printf("%s %d\n", ptr->name, ptr->score);
	
	strcpy((*ptr).name, "Xiaoming");
	(*ptr).score = 93;
	printf("%s %d\n", (*ptr).name, (*ptr).score);
	
	return 0;
}

