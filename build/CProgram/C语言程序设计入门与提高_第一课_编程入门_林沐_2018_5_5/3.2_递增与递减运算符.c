#include <stdio.h>

int main(){
	int number = 6;
	printf("number = %d\n", number);
	number++;
	printf("number = %d\n", number);
	++number;
	printf("number = %d\n", number);
	number--;
	printf("number = %d\n", number);
	--number;
	printf("number = %d\n", number);
	
	int n1 = 10;
	int temp1 = 5 + n1++;
	int n2 = 10;
	int temp2 = 5 + ++n2;
	printf("temp1 = %d temp2 = %d\n", temp1, temp2);	
	return 0;
}

