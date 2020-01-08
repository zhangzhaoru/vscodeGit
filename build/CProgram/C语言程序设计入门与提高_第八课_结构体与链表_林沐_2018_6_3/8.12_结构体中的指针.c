#include <stdio.h>
#include <string.h>

struct student{
	char *name;
	int age;
};

typedef struct student student;

int main(){
	char buffer[100] = "LinMu";
	student s1;
	student s2;
	s1.name = buffer;
	s1.age = 28;
	s2 = s1;
	printf("s1 : %s %p %d\n", s1.name, s1.name, s1.age);
	printf("s2 : %s %p %d\n", s2.name, s2.name, s2.age);
	
	strcpy(s1.name, "Peter");
	printf("s2 : %s %p %d\n", s2.name, s2.name, s2.age);
	printf("buffer = %s\n", buffer);
	
	return 0;
}

