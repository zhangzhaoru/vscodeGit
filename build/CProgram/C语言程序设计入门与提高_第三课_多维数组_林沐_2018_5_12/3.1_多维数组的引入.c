#include <stdio.h>

#define MAX_CLASS_NUM 20
#define MAX_STUDENT_NUM 50

int main(){
	int class_num;
	int students_num[MAX_CLASS_NUM];
	int grade[MAX_CLASS_NUM][MAX_STUDENT_NUM];
	double class_average[MAX_CLASS_NUM];
	int i, j;
	printf("Please input class number: ");
	scanf("%d", &class_num);
	printf("Please input student number of all classes:\n");
	for (i = 0; i < class_num; i++){
		scanf("%d", &students_num[i]);
	}
	printf("Please input all grades:\n");
	for (i = 0; i < class_num; i++){
		for (j = 0; j < students_num[i]; j++){
			scanf("%d", &grade[i][j]);
		}
	}
	for (i = 0; i < class_num; i++){
		double sum = 0;
		for (j = 0; j < students_num[i]; j++){
			sum += grade[i][j];
		}
		class_average[i] = sum / students_num[i];
	}
	printf("\n");
	for (i = 0; i < class_num; i++){
		printf("class %d students' grade:\n", i);
		for (j = 0; j < students_num[i]; j++){
			printf("%d ", grade[i][j]);
		}
		printf("\n");
		printf("average = %.2lf\n", class_average[i]);
		printf("\n");
	}	
	return 0;
}

