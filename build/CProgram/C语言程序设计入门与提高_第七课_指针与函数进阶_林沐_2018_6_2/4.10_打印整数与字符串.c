
int putchar(int ch);
void print_int(int value){
	char temp[30] = {0};
	int cnt = 0;
	while(value){
		temp[cnt++] = value % 10;
		value = value / 10;
	}
	while(cnt){
		cnt--;
		putchar(temp[cnt] + '0');
	}
}
void print_string(const char *value){
	while(*value){
		putchar(*value);
		value++;
	}
}

int main(){
	int a = 1234567890;
	char *str = "abcdefg ### ppp";	
	print_int(a);
	putchar('\n');
	print_string(str);
	putchar('\n');
	return 0;
}

