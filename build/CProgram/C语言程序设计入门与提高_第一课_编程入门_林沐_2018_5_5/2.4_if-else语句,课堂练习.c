#include <stdio.h>

int main(){
	char letter;
	printf("Please enter a lowercase or an uppercase:\n");
	scanf("%c", &letter);
	if(!(letter >= 'a' && letter <= 'z' || 
		 letter >= 'A' && letter <= 'Z')){
 		printf("Your entered wrong letter.\n");
		return 0;
	}
	if (letter >= 'A' && letter <= 'Z'){
		letter = letter - 'A' + 'a';
	}
	else{
		letter = letter - 'a' + 'A';
	}
	printf("The changed letter is %c.\n", letter);
	return 0;
}


