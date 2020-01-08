#include <stdio.h>

int main(){
	char str[20] = "I love coding.";
	int array[5] = {0};
	
	printf("sizeof str = %d, sizeof array = %d\n",
				sizeof(str), sizeof(array));
	array[0] = *((int *)&str[0]);
	array[1] = *((int *)&str[4]);
	array[2] = *((int *)&str[8]);
	array[3] = *((int *)&str[12]);
	array[4] = *((int *)&str[16]);
	int i;
	for (i = 0; i < 5; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	for (i = 0; i < 20; i++){
		printf("%d ", str[i]);
	}
	printf("\n");	
	return 0;
}
