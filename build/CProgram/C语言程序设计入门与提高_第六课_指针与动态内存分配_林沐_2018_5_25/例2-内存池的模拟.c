#include <stdio.h>

#define MEMORY_MAX_SIZE 10240

void *memory_allocat(void *memory, int allocat){
	int *used_size = (int *)memory;
	memory = memory + sizeof(int) + *used_size;
	if (*used_size + allocat > MEMORY_MAX_SIZE){
		return NULL;
	}
	*used_size += allocat;
	return memory;
}

int get_memory_used(void *memory){
	return *(int *)memory + sizeof(int);
}

char *allocat_char(void *memory, int n){
	return (char *)memory_allocat(memory, n * sizeof(char));
}

int *allocat_int(void *memory, int n){
	return (int *)memory_allocat(memory, n * sizeof(int));
}

double *allocat_double(void *memory, int n){
	return (double *)memory_allocat(memory, n * sizeof(double));
}

void run_main_function(void *memory){
	int i;
	char *name = allocat_char(memory, 20);
	printf("Please input your name:\n");
	scanf("%s", name);
	int *score_num = allocat_int(memory, 1);
	printf("Please input score number:\n");
	scanf("%d", score_num);
	int *score = allocat_int(memory, *score_num);
	printf("Please input %d scores:\n", *score_num);
	for (i = 0; i < *score_num; i++){
		scanf("%d", &score[i]);
	}
	int *sum = allocat_int(memory, 1);
	double *average = allocat_double(memory, 1);
	*sum = 0;
	for (i = 0; i < *score_num; i++){
		*sum += score[i];
	}
	*average = (double)(*sum) / *score_num;
	printf("\n");
	printf("Your name is %s.\n", name);
	printf("The scores:\n");
	for (i = 0; i < *score_num; i++){
		printf("%d ", score[i]);
	}
	printf("\n");
	printf("sum = %d average = %.2lf\n", *sum, *average);
}

void check_memory(void *memory){
	printf("\ncheck begin:\n");
	void *check = memory;
	check += sizeof(int);
	printf("name = [%s]\n", (char *)check);
	check += 20 * sizeof(char);
	int *score_num = (int *)check;
	printf("score_num = %d\n", *score_num);
	check += sizeof(int);
	int i;
	for (i = 0; i < *score_num; i++){
		printf("score[%d] = %d\n", i, *(int *)check);
		check += sizeof(int);
	}
	printf("sum = %d\n", *(int *)check);
	check += sizeof(int);
	printf("average = %.2lf\n", *(double *)check);
	check += sizeof(double);
	printf("used_size = %d, %d\n",
			get_memory_used(memory), check - (void *)memory);
}

int main(){
	char memory[MEMORY_MAX_SIZE] = {0};
	run_main_function(memory);
	check_memory(memory);
	return 0;
}

