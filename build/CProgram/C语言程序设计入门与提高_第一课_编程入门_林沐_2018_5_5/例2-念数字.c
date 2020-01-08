#include <stdio.h>

int main(){
	int number;
	printf("Please input a number from 1 to 99:\n");
	scanf("%d", &number);
	if (number < 1 || number > 99){
		printf("INPUT ERROR!\n");
		return 0;
	}
	int tens_place = number / 10;
	int ones_place = number % 10;
	switch(tens_place){
		case 0:break;
		case 1:printf("SHI ");
			break;
		case 2:printf("ER SHI ");
			break;
		case 3:printf("SAN SHI ");
			break;
		case 4:printf("SI SHI ");
			break;
		case 5:printf("WU SHI ");
			break;
		case 6:printf("LIU SHI ");
			break;
		case 7:printf("QI SHI ");
			break;
		case 8:printf("BA SHI ");
			break;
		case 9:printf("JIU SHI ");
			break;
	}
	switch(ones_place){
		case 0:printf("\n");
			break;
		case 1:printf("YI\n");
			break;
		case 2:printf("ER\n");
			break;
		case 3:printf("SAN\n");
			break;
		case 4:printf("SI\n");
			break;
		case 5:printf("WU\n");
			break;
		case 6:printf("LIU\n");
			break;
		case 7:printf("QI\n");
			break;
		case 8:printf("BA\n");
			break;
		case 9:printf("JIU\n");
			break;
	}
	return 0;
}
