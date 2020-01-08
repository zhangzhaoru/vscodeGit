#include <stdio.h>

struct student{
	char name[10];
	int age;
	int score[3];
	double average;
};
int main(){
	struct student stu;
	printf("sizeof(struct student) = %d\n", sizeof(stu));
	int sum  = sizeof(stu.name) + sizeof(stu.age) + 
			   sizeof(stu.score) + sizeof(stu.average);
	printf("sum = %d\n", sum);
	printf("stu address = %p\n", &stu);
	printf("stu.name address = %p\n", stu.name);
	printf("stu.age address = %p\n", &stu.age);
	printf("stu.score address = %p\n", stu.score);
	printf("stu.average address = %p\n", &stu.average);
	return 0;
}

