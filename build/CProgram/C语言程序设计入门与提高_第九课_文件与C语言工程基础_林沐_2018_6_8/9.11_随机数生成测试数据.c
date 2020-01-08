#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 10000

int main(){
	freopen("test.txt", "w", stdout);
	srand(time(NULL));
	int i;
	for (i = 0; i < MAX_NUMBER; i++){
		int num = rand() * rand() * rand() % 100003;
		if (rand() % 2){
			printf("%d ", num);
		}
		else{
			printf("%d ", -num);
		}
	}
	return 0;
}

