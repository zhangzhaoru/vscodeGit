#include <stdio.h>

int main(){
	char a;
	short b;
	int c, c1, c2, c3;
	long d;
	long long e;
	float f;
	double g;
	
	scanf("%c", &a);
	scanf("%hd", &b);
	scanf("%d", &c);
	scanf("%ld", &d);
	scanf("%lld", &e);
	scanf("%f", &f);
	scanf("%lf", &g);
		
	printf("char takes %d bytes, a = %c.\n", sizeof(a), a);
	printf("short takes %d bytes, b = %hd.\n", sizeof(b), b);
	printf("int takes %d bytes, c = %d.\n", sizeof(c), c);
	printf("long takes %d bytes, d = %ld.\n", sizeof(d), d);
	printf("long long takes %d bytes, e = %lld.\n", sizeof(e), e);
	printf("float takes %d bytes, f = %.20f.\n", sizeof(f), f);
	printf("double takes %d bytes, g = %.20lf.\n", sizeof(g), g);
	
	return 0;
}

