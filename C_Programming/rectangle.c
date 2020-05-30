/***************************************************************************
 Rectangle: A rectangle is a quadrilateral with four right angles. 
 It can also be defined as an equiangular quadrilateral, 
 since equiangular means that all of its angles are equal. 
 It can also be defined as a parallelogram containing a right angle. 
 A rectangle with vertices A, B, C, and D is denoted ▭ABCD.
 
                 A _________________ B
                  |                 |
                  |                 |
                  |_________________|
                 C                    D
****************************************************************************/

#include <stdio.h>

int main() {
	
	double width, height, perimeter, area;
	printf("Enter the width and height of the rectangle: ");
	scanf("%lf %lf", &width, &height);
	
	printf("\n\n\t--------------- RECTANGLE ---------------");
	printf("\nA rectangle is defined as a parallelogram containing a right angle.");
	printf("\n\nNo. of vertices: 4");
	printf("\nNo. of edges: 4");
	printf("\nInternal angle: 90°");
	printf("\nSum of all internal angles: 360°");
	printf("\nWidth: %.2lf", width);
	printf("\nHeight: %.2lf", height);
	
	perimeter = 2 * (width + height);
	area = width * height;
	
	printf("\nPerimeter: %.2lf", perimeter);
	printf("\nArea: %.2lf", area);
	
	return 0;
}

