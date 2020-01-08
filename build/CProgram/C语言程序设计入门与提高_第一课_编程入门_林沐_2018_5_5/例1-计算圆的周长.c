#include <stdio.h>
#include <math.h>

int main(){
	const double Pi = 3.1416;
	double area;
	double radius;
	double diameter;
	printf("Please input the area of circle:\n");
	scanf("%lf", &area);
	radius = sqrt(area / Pi);
	diameter = 2 * Pi * radius;
	printf("The diameter of circle is %.2lf.\n", diameter);
	return 0;
}


