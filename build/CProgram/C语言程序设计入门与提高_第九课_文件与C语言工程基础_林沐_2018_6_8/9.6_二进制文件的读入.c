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
	
	FILE *fp = fopen("binary_write.dat", "rb");
	int read_cnt = fread(&n, sizeof(int), 1, fp);
	printf("read_cnt = %d\n", read_cnt);	
	read_cnt = fread(s, sizeof(student), n, fp);
	printf("read_cnt = %d\n", read_cnt);
	
	printf("%d\n", n);
	for (i = 0; i < n; i++){
		printf("%s %d\n", s[i].name, s[i].score);
	}
	fclose(fp);
	return 0;
}

