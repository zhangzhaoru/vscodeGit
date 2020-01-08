

#include <stdarg.h>

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

void simple_print(const char *control, ...){	
	va_list parg;
	va_start(parg, control);	
	while(*control){
		if (*control == '%'){
			char type = *(control+1);
			if (type == 'd'){
				int value = va_arg(parg, int);
				print_int(value);
			}
			else if (type == 'c'){
				int value = va_arg(parg, int);
				putchar(value);
			}
			else if (type == 's'){
				const char *value = va_arg(parg, const char *);
				print_string(value);
			}
			if (type == 'd' || type == 'c' || type == 's'){
				control++;
			}
		}
		else{
			putchar(*control);
		}
		control++;
	}
	va_end(parg);
}

int main(){
	char name[20] = "LinMu";
	int age = 28;
	simple_print("My name is %s, I'm %d years old.\n", name, age);
	simple_print("My name is spelled:\n");
	int i = 0;
	while(name[i]){
		simple_print("%c\n", name[i]);
		i++;
	}
	return 0;
}

