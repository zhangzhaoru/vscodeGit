#include <stdio.h>

int main(){
	FILE *fp1 = fopen("ASC2码的写入1.txt", "w");
	FILE *fp2 = fopen("ASC2码的写入3.txt", "a");
	fprintf(fp1, "I love coding.\n");
	fprintf(fp2, "I love coding.\n");
	fclose(fp1);
	fclose(fp2);
	return 0;
}

