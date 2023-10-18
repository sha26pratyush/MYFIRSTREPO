#include<stdio.h>

int main(void) {
	float radius, area, circum, dia ;

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	printf("The diameter of the circle with radius %f is %f.\nThe circumference of the circle with radius %f is %f.\nThe area of the circle with radius %f is %f.\n", radius, 2*radius, radius, 2*3.14*radius, radius, 3.14*radius*radius) ;

}
