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
	
	printf("\n\n\t--------------- CIRCLE ---------------");
	printf("\nA circle is a shape consisting of all points in a plane \nthat are a given distance from a given point, the centre.");
	printf("\n\nNo. of vertices: 0");
	printf("\nNo. of edges: 0");
	printf("\nRadius: %.2lf", radius);
	
	diameter = 2 * radius;
	circumference = 2 * PI * radius;
	area = PI * radius * radius;
	
	printf("\nDiameter: %.2lf", diameter);
	printf("\nCircumference: %.2lf", circumference);
	printf("\nArea: %.2lf", area);
	
	return 0;
}

