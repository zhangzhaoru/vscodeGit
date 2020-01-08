#include <stdio.h>

int main(){
	int logic1 = (5 < 6) && (5 < 1);
	int logic2 = (81 < 81)|| (1 < 20);
	int logic3 = !(31 == 60);
	printf("logic1 = %d, logic2 = %d, logic3 = %d\n",
							logic1, logic2, logic3);	
	return 0;
}

