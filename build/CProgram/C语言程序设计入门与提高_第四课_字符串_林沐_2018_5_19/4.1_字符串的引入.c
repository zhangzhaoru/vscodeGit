#include <stdio.h>

int main(){
	char name[100];
	char something[100];
	printf("What is your name?\n");
	printf("Please input: ");
	scanf("%s", name);
	getchar();	
	printf("Say something to us:\n");
	gets(something);	
	printf("Your name is \"%s\".\n", name);
	printf("You say \"%s\".\n", something);	
	printf("Your name is spelled:\n");
	int i = 0;
	while(name[i]){
		printf("%c\n", name[i]);
		i++;
	}
	return 0;
}

