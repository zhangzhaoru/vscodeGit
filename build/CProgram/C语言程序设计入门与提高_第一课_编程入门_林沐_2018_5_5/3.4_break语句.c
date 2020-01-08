#include <stdio.h>

int main(){
	int sum = 0;
	int i;
	for (i = 1; i <= 200; i++){
		if (i > 100){
			break;
		}
		sum += i;		
	}
	printf("sum = %d\n", sum);
	return 0;
}

