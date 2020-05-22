/***************************************************************************************************************************
 Circle: A circle is a shape consisting of all points in a plane that are a given distance from a given point, the centre; 
 equivalently it is the curve traced out by a point that moves in a plane so that its distance from a given point is constant.
****************************************************************************************************************************/

#include <stdio.h>
#define PI 3.14159

int main() {
	
	double radius, area, circumference, diameter;
	printf("Enter the radius of the circle: ");
	scanf("%lf", &radius);
	
	diameter = 2 * radius;
	circumference = 2 * PI * radius;
	area = PI * radius * radius;
	
	printf("\nDiameter of circle: %.2lf", diameter);
	printf("\nCircumference of circle: %.2lf", circumference);
	printf("\nArea of circle: %.2lf", area);
	
	return 0;
}

