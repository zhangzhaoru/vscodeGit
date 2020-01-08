#include <stdio.h>
#include <math.h>
int is_prime(int num){
	int max_factor = sqrt(num) + 1;
	int i;
	for (i = 2; i < max_factor; i++){
		if (num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int number;
	scanf("%d", &number);
	while(number){
		int i;
		for (i = 3; i <= number / 2; i++){
			if (is_prime(i) && is_prime(number - i)){
				printf("%d = %d + %d\n", number, i, number - i);
				break;
			}
		}
		scanf("%d", &number);	
	}
	return 0;
}
