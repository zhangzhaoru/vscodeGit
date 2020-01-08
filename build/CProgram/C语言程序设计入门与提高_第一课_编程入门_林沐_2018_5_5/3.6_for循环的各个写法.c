#include <stdio.h>

int main(){
	int sum;
	int i;
	
	sum = 0;
	for (i = 1; i <= 100; i++){
		sum = sum + i;
	}
	printf("sum = %d\n", sum);
	
	sum = 0;
	i = 1;	
	for ( ; i <= 100; i++){
		sum = sum + i;
	}
	printf("sum = %d\n", sum);
	
	sum = 0;
 	i = 1;
 	for ( ; i <= 100; ){
		sum = sum + i;
	 	i++;
	}
	printf("sum = %d\n", sum);
 	
	sum = 0;
 	i = 1;
 	for ( ; ; ){
		sum = sum + i;
	 	i++;
	 	if (i > 100){
	 		break;
	 	}
	}
	printf("sum = %d\n", sum);	
	
	return 0;
}
