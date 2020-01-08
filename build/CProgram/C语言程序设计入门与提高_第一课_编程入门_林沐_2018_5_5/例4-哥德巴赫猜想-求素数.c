#include <stdio.h>
#include <math.h>
int main(){
	int number;
	scanf("%d", &number);
	int prime = number;
	int max_factor = sqrt(prime) + 1;
	int i;
	for (i = 2; i < max_factor; i++){
		if (prime % i == 0){
			prime = 0;
			break;
		}
	}
	if (prime > 1){
		printf("%d is a prime.\n", number);
	}
	else{
		printf("%d is not a prime.\n", number);
	}
	return 0;
}


