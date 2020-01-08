#include <stdio.h>

int main(){
	char str_array1[3][50] = {
		"I love coding.",
		"Let's go to work.",
		"Programming is not so hard."
	};	
	int i;
	printf("str_array1:\n");
	for (i = 0; i < 3; i++){
		printf("%s\n", str_array1[i]);
	}
	printf("Please input 3 strings:\n");
	for (i = 0; i < 3; i++){
		scanf("%s", str_array1[i]);
	}
	printf("str_array1:\n");
	for (i = 0; i < 3; i++){
		printf("%s\n", str_array1[i]);
	}
	
	char str_array2[][50] = {
		"I love coding.",
		"Let's go to work.",
		"Programming is not so hard."
	};
	int str_array2_size = sizeof(str_array2) / sizeof(str_array2[0]);
	printf("str_array2_size = %d\n", str_array2_size);
	printf("str_array2:\n");
	for (i = 0; i < 3; i++){
		printf("%s\n", str_array2[i]);
	}
	return 0;
}

