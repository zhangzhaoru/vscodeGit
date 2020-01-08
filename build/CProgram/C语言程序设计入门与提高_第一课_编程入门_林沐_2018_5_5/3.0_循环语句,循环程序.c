#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Please input n:\n");
	scanf("%d", &n);
	int i = 1;
	while (i <= n){
		sum = sum + i;
		i = i + 1;
	}
	printf("1 + 2 + ... + n = %d\n", sum);
	return 0;
}

