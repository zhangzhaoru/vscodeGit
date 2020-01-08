#include <stdio.h>

#include <stdlib.h>
#include <string.h>

void swap(char *a, char *b, int width){
	char tmp;
	while(width){
		tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
		width--;
	}
}

void sort_array(void *base, int num, int width,
				int (*compare)(const void *, const void *)){
	int i, j;
	void *temp = malloc(width);
	for (i = 0; i < num; i++){
		for (j = i + 1; j < num; j++){			
			void *element1 = base + i * width;
			void *element2 = base + j * width;
			if (compare(element1, element2) > 0){
				swap(temp, element1, width);
				swap(element1, element2, width);
				swap(element2, temp, width);
			}
		}
	}
	free(temp);
}

int int_cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int double_cmp(const void *a, const void *b){
	return *(double *)a > *(double *)b ? 1 : -1;
}

int str_cmp(const void *a, const void *b){
	return strcmp((char *)a, (char *)b);	
}

int str_ptr_cmp(const void *a, const void *b){
	return strcmp(*(char **)a, *(char **)b);
}

int main(){
	int int_array[8] = {2, 50, 3, -7, 2, 9, 0, 0};
	double double_array[8] = {2.5, 13.12, -0.7, 0, -50, 9, -0.123, 0};
	const char *str_array_ptr[8] = {
		"zzz",
		"zzzz",
		"xxxxxxxxx",
		"p",
		"abc",
		"ccckkk",
		"aaa",
		"mmwordilovecoding"
	};
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
	int i;
		
	sort_array(int_array, 8, sizeof(int), int_cmp);
	printf("int_array:\n");
	for (i = 0; i < 8; i++){
		printf("%d ", int_array[i]);
	}
	printf("\n\n");
	
	sort_array(double_array, 8, sizeof(double), double_cmp);
	printf("double_array:\n");
	for (i = 0; i < 8; i++){
		printf("%lf ", double_array[i]);
	}
	printf("\n\n");
	
	sort_array(str_array_ptr, 8, sizeof(str_array_ptr[0]), str_ptr_cmp);
	printf("str_array_ptr:\n");
	for (i = 0; i < 8; i++){
		printf("%s\n", str_array_ptr[i]);
	}
	printf("\n");
	
	sort_array(str_array, 8, sizeof(str_array[0]), str_cmp);
	printf("str_array:\n");
	for (i = 0; i < 8; i++){
		printf("%s\n", str_array[i]);
	}
	return 0;
}

