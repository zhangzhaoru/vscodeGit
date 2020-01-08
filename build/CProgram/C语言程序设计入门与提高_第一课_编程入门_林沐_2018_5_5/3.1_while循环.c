#include <stdio.h>

int main(){
	int number;
	int count = 0;
	scanf("%d", &number);
	while(number != 0){
		count = count + 1;
		scanf("%d", &number);
	}
	printf("count = %d\n", count);	
	return 0;
}

