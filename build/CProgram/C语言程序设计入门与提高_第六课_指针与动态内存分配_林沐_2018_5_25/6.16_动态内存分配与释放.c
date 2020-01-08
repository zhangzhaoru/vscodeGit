#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int *number = malloc(sizeof(int) * n);
	int i;
	for (i = 0; i < n; i++){
		number[i] = i * 100;
	}
	for (i = 0; i < n; i++){
		printf("%d ", number[i]);
	}
	printf("\n");
	free(number);
	return 0;
}

