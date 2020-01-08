#include <stdio.h>

struct student{
	char name[20];
	int score;
};
typedef struct student student;

int main(){
	student s[20];
	int n, m;
	int i;
	scanf("%d", &m);
	for (i = 0; i < m; i++){
		scanf("%s %d", s[i].name, &s[i].score);
	}
	
	FILE *fp = fopen("binary_write.dat", "rb+");
	fread(&n, sizeof(int), 1, fp);
	fseek(fp, 0, SEEK_SET);
	n += m;
	fwrite(&n, sizeof(int), 1, fp);
	fclose(fp);
	
	fp = fopen("binary_write.dat", "ab");
	fwrite(s, sizeof(student), m, fp);
	fclose(fp);
	return 0;
}

