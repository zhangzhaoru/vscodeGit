#include <stdio.h>

int main(){
	char str[100];
	int number = -1;
	scanf("%s", str);
	int i;	
	for (i = 0; str[i]; i++){
		if (number == -1){
			if (str[i] >= '0' && str[i] <= '9'){
				number = str[i] - '0';
			}
		}
		else{
			if (str[i] >= '0' && str[i] <= '9'){
				number = number * 10 + str[i] - '0';
			}
			else{
				printf("%d\n", number);
				number = -1;
			}
		}
	}
	if (number != -1){
		printf("%d\n", number);
	}
	return 0;
}

