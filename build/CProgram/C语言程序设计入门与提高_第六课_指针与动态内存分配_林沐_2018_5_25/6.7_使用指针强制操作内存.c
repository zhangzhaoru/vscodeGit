#include <stdio.h>

int main(){	
	double temp;
	char *ptr = (char *)(&temp);
	ptr[0] = 'a';
	ptr[1] = 'b';
	ptr[2] = 'c';
	ptr[3] = 'd';
	ptr[4] = 'e';
	ptr[5] = '\0';
	printf("ptr = [%s]\n", ptr);
	printf("temp = %lf\n", temp);
	return 0;
}

