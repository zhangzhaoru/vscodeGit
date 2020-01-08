#include <stdio.h>
#include <string.h>

int main(){
	char buffer[1024] = {0};
	fgets(buffer, 1024, stdin);
	while(buffer[0] != '#'){
		int len = strlen(buffer);
		fprintf(stdout, "len = %d\n", len);
		fgets(buffer, 1024, stdin);
	}
	return 0;
}
