#include <stdio.h>

int main(){
	char name[100];
	char something[100];
	puts("What is your name?");
	printf("Please input: ");
	scanf("%s", name);
	char ch = getchar();
	printf("Say something to us:\n");
	gets(something);
	printf("Your name is \"%s\".\n", name);
	printf("You say \"%s\".\n", something);	
	printf("ch = [%c][%d]\n", ch, ch);
	return 0;
}

