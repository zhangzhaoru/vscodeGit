#include <stdio.h>

int sum(int x, int y){
	return x + y;
}

int difference(int x, int y){
	return x - y;
}

int product(int x, int y){
	return x * y;
}

int main(){
	int a = 5;
	int b = 8;
		
	int (*p_func[3])(int, int) = {
		sum,
		difference,
		product
	};
	
	char name[3][20] = {
		"sum",
		"difference",
		"product"
	};
	
	printf("p_func sizeof = %d\n", sizeof(p_func));
	
	int i;
	for (i = 0; i < 3; i++){
		printf("%s(%d, %d) = %d\n",
			name[i], a, b, p_func[i](a, b));
	}
	return 0;
}

