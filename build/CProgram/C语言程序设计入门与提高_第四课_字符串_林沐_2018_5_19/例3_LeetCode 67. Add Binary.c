#include <stdio.h>


#include <stdlib.h>
#include <string.h>
void string_rev(char *str){
	int len = strlen(str);
	int half_len = (len + 1) / 2;
	int i;
	for (i = 0; i < half_len; i++){
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

char *addBinary(char *a, char *b) {
	int len1 = strlen(a);
	int len2 = strlen(b);
	int max_len = len1 > len2 ? len1 : len2;
	char *result = malloc(max_len + 10);
	memset(result, 0, max_len + 10);
	int i = len1 - 1;
	int j = 0;
	while(i >= 0){
		result[j] = a[i] - '0';
		i--;
		j++;
	}
	i = len2 - 1;
	j = 0;
	while(i >= 0){
		result[j] += b[i] - '0';
		i--;
		j++;
	}
	for (i = 0; i < max_len; i++){
		result[i + 1] += result[i] / 2;
		result[i] = result[i] % 2 + '0';
	}
	if (result[i]){
		result[i] += '0';
	}
	string_rev(result);
	return result;
}

int main(){
	char a1[] = "10110";
	char b1[] = "11110111";
	char *c = addBinary(a1, b1);
	printf("%s\n", c);
	char a2[] = "101100101010000001100101010100100010010101011111111";
	char b2[] = "1111011101010010101010";
	c = addBinary(a2, b2);
	printf("%s\n", c);
	free(c);
	return 0;
}

