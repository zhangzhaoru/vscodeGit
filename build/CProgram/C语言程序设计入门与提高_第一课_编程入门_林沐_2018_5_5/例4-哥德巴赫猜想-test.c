
#include <stdio.h>
#include <math.h>

int main(){
	freopen("Àý4-test_in.txt", "r", stdin);
	freopen("Àý4-test-my_out.txt", "w", stdout);
	
	int number;
	scanf("%d", &number);
	int i, j;
	for (i = 2; i <= number / 2; i++){
		int prime1 = i;
		int max_factor = sqrt(prime1) + 1;
		for (j = 2; j < max_factor; j++){
			if (prime1 % j == 0){
				prime1 = 0;
				break;
			}
		}
		int prime2 = number - i;
		max_factor = sqrt(prime2) + 1;
		for (j = 2; j < max_factor; j++){
			if (prime2 % j == 0){
				prime2 = 0;
				break;
			}
		}
		if (prime1 && prime2){
			printf("%d = %d + %d\n", number, prime1, prime2);
		}
	}
	return 0;
}

