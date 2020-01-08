#include <stdio.h>

int main(){
	char array1[10] = {0};
	int array2[10] = {0};
	double array3[10] = {0};
	char *ptr1 = array1;
	int *ptr2 = array2;
	double *ptr3 = array3;
	void *ptr_x = array3;
	int i;
	for (i = 0; i < 10; i++){
		printf("ptr1=%p ptr2=%p ptr3=%p ptr_x=%p\n",
						ptr1, ptr2, ptr3, ptr_x);
		ptr1++;
		ptr2++;
		ptr3++;
		ptr_x++;
	}
	return 0;
}

