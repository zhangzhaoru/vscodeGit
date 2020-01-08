#include <stdio.h>

int main(){
	int compare1 = (5 < 6);
	int compare2 = (81 <= 81);
	int a = 31;
	int b = 60;
	int compare3 = (a == b);
	int compare4 = (a != b);
	int compare5 = (a > b);
	int compare6 = (a >= b);
	printf("compare1 = %d\n", compare1);
	printf("compare2 = %d\n", compare2);
	printf("compare3 = %d\n", compare3);
	printf("compare4 = %d\n", compare4);
	printf("compare5 = %d\n", compare5);
	printf("compare6 = %d\n", compare6);
	return 0;
}


