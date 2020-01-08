#include <stdio.h>

struct student{
	char name[20];
	int score;
};

typedef struct student student;

int main(){
	student s[20];
	int n;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%s %d", s[i].name, &s[i].score);
	}
	
	FILE *fp = fopen("binary_write.dat", "wb");
	int write_cnt = fwrite(&n, sizeof(int), 1, fp);
	printf("write_cnt = %d\n", write_cnt);
	
	write_cnt = fwrite(s, sizeof(student), n, fp);
	printf("write_cnt = %d\n", write_cnt);
	
	int binary_sum = sizeof(int) + n * sizeof(student);
	printf("binary_sum = %d\n", binary_sum);
	
	fclose(fp);	
	return 0;
}

