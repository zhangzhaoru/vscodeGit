#include <stdio.h>

struct student{
	char name[20];
	int score;
};
typedef struct student student;

int main(){
	student s[20];
	int n;
	int i;
	
	printf("sizeof student = %d\n", sizeof(student));
	
	FILE *fp = fopen("binary_write.dat", "rb");
	int pos = ftell(fp);
	printf("pos = %d\n", pos);	
	fread(&n, sizeof(int), 1, fp);
	printf("n = %d\n", n);
	pos = ftell(fp);
	printf("pos = %d\n", pos);
	
	int m = n - 2;	
	fread(s, sizeof(student), m, fp);
	pos = ftell(fp);	
	printf("pos = %d\n", pos);
	
	int sum = sizeof(int) + sizeof(student) * 3;
	printf("sum = %d\n", sum);
	
	fseek(fp, 0, SEEK_SET);
	fread(&n, sizeof(int), 1, fp);
	printf("n = %d\n", n);
	fseek(fp, pos, SEEK_SET);	
	fread(s + m, sizeof(student), 2, fp);
	
	for (i = 0; i < n; i++){
		printf("%s %d\n", s[i].name, s[i].score);
	}
	
	fclose(fp);
	return 0;
}

