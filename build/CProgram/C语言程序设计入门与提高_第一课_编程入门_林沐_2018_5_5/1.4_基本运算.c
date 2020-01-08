#include <stdio.h>

int main(){
	int cookies_num = 24;
	double total_price = cookies_num * 3.3;
	int eaten = 3;
	int child_num = 8;
	int cookies_per_child = 0;
	int cookies_left = 0;
	
	cookies_per_child = (cookies_num - eaten) / child_num;
	cookies_left = (cookies_num - eaten) % child_num;
	
	printf("Every child can get %d cookies.\n", cookies_per_child);
	printf("There are %d cookies left over.\n", cookies_left);
	printf("To buy those cookies needs %.2lf yuan.\n", total_price);
	return 0;
}

