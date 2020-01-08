#include <stdio.h>

void print_array(void *base, int num, int width,
				void (*print)(const void *)){
	int i;
	for (i = 0; i < num; i++){
		void *element = base + i * width;
		print(element);
	}
	printf("\n");
}

void int_print(const void *a){
	printf("%d ", *(int *)a);
}

void str_print(const void *a){
	printf("%s\n", (char *)a);
}

int main(){
	int int_array[8] = {2, 50, 3, -7, 2, 9, 0, 0};
	char str_array[8][100] = {
		"zzz",
		"zzzz",
		"xxxxxxxxx",
		"p",
		"abc",
		"ccckkk",
		"aaa",
		"mmwordilovecoding"
	};
	print_array(int_array, 8, sizeof(int), int_print);
	print_array(str_array, 8, sizeof(str_array[0]), str_print);	
	
	return 0;
}

