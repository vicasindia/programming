/***************************************************************************
 Triangle: A triangle is a polygon with three edges and three vertices.
  It is one of the basic shapes in geometry. 
  A triangle with vertices A, B, and C is denoted △ABC.
 
                            A
                            /\
                           /  \
                          /____\
                         B      C
****************************************************************************/

#include <stdio.h>

int main() {
	
	double base, height, area;
	printf("Enter the base and height of the triangle: ");
	scanf("%lf %lf", &base, &height);
	
	printf("\n\n\t--------------- TRIANGLE ---------------");
	printf("\nA triangle is a polygon with three edges and three vertices.");
	printf("\n\nNo. of vertices: 3");
	printf("\nNo. of edges: 3");
	printf("\nSum of all internal angles: 180°");
	printf("\nPerimeter: sum of side lengths");
	printf("\nBase: %.2lf", base);
	printf("\nHeight: %.2lf", height);
	
	area = 0.5 * base * height;
	
	printf("\nArea: %.2lf", area);
	
	return 0;
}

