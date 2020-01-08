#include <stdio.h>
#include <stdarg.h>

double average(int value, ...){
	double sum = value;
	int count = 1;	
	va_list parg;	
	va_start(parg, value);
	value = va_arg(parg, int);
	while (value != -1){
		sum += value;
		count++;
		value = va_arg(parg, int);
	}
	va_end(parg);
	return sum / count;
}

int main(){
	printf("%lf\n", average(1, -1));
	printf("%lf\n", average(1, 2, -1));
	printf("%lf\n", average(1, 2, 3, -1));
	printf("%lf\n", average(1, 2, 3, 4, -1));
	printf("%lf\n", average(1, 2, 3, 4, 5, -1));	
	return 0;
}

