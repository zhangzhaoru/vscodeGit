#include <stdio.h>

int main(){
	FILE *fp = fopen("ASC2_read_in.txt", "r");
	int ch = fgetc(fp);
	printf("ch = %c\n", ch);
	ch = fgetc(fp);
	printf("ch = %c\n", ch);
	char buffer[50];
	fgets(buffer, 50, fp);
	printf("buffer = %s", buffer);
	fgets(buffer, 50, fp);
	printf("buffer = %s", buffer);
	int num1;
	double num2;
	fscanf(fp, "%d %lf", &num1, &num2);
	printf("num1 = %d num2 = %lf\n", num1, num2);	
	fclose(fp);
	return 0;
}

