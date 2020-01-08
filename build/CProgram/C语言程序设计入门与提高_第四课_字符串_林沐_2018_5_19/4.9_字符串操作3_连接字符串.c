#include <stdio.h>
#include <string.h>

void my_strcat(char *to, const char *from){
	int i = 0;
	while(to[i]){
		i++;
	}
	int j = 0;
	while(from[j]){
		to[i] = from[j];
		i++;
		j++;
	}
	to[i] = '\0';
}

void my_strcat_s(char *to, int size, const char *from){
	int i = 0;
	while(to[i]){
		i++;
	}
	size--;
	int j = 0;
	while(from[j] && i < size){
		to[i] = from[j];
		i++;
		j++;
	}
	to[i] = '\0';
}

int main(){
	char str[10] = "123456789";
	char str2_1[20] = "aaaaa";
	char str2_2[20] = "aaaaa";
	char str2_3[20] = "aaaaa";
	printf("str = [%s]\n", str);
	printf("str2_1 = [%s]\n", str2_1);
	printf("str2_2 = [%s]\n", str2_2);
	printf("str2_3 = [%s]\n", str2_3);
	strcat(str2_1, str);
	my_strcat(str2_2, str);
	my_strcat_s(str2_3, 20, str);
	printf("str2_1 = [%s]\n", str2_1);
	printf("str2_2 = [%s]\n", str2_2);
	printf("str2_3 = [%s]\n", str2_3);	
	char str3[10] = "aaaaa";
	my_strcat_s(str3, sizeof(str3), str);
	printf("str3 = [%s]\n", str3);
	return 0;
}

