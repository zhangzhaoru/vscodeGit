#include <stdio.h>

int main(){
	int n1, n2, n3;
	double d1;
	printf("Please input:\n");
	
	scanf("%d", &n1);
	
	scanf("%d %d %lf", &n2, &n3, &d1);
	
	printf("n1 = %d n2 = %d\n", n1, n2);
		
	printf("n3 = %d d1 = %lf\n", n3, d1);
	
	return 0;
}

