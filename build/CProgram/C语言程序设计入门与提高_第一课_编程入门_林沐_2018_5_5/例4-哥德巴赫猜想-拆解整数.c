#include <stdio.h>

int main(){
	int number;
	scanf("%d", &number);
	int i;
	for (i = 1; i <= number / 2; i++){
		printf("%d = %d + %d\n", number, i, number - i);
	}	
	return 0;
}

