//对于字符串数组进行排序
#include<string.h>
#include<stdlib.h>
#include<iostream>

void sort_str(char *str_array[],int str_n){
    int i,j;
    for(i = 0;i<str_n;i++){
        for(j = i+1;j<str_n;j++){
            if(strcmp(str_array[i],str_array[j])){
                char *temp = str_array[i];
                str_array[i] = str_array[j];
                str_array[j] = temp;
            }
        }
    }
}

int main(){
	char memory[100100] = {0};
	char *str_array[100] = {0};
	char *ptr = memory;
	int n;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%s", ptr);
		str_array[i] = ptr;
		ptr = ptr + strlen(ptr) + 1;
	}
	sort_str(str_array, n);
	for (i = 0; i < n; i++){
		printf("%s\n", str_array[i]);
	}
    system("pause");
	return 0;
}
