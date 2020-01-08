
#include <stdio.h>

int main(){
	int a = 12345;
	double A_DOUBLE_variable;
	char ch12345;
	
	A_DOUBLE_variable = 35.77896;
	int *a_address = &a;
	printf("a = %d, a_address = %x\n", a, a_address);
	printf("A_DOUBLE_variable = %lf\n", A_DOUBLE_variable);
	
	return 0;
}

