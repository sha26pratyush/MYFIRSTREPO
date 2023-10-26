//program to calculate area and circumference of a circle.

#include<stdio.h>
int main(void) {
	float rad;

	printf("Enter the radius of the circle: ");
	scanf("%f", &rad);

	printf("The area of the circle is %f.\nThe circumference of the circle is %f.\n", 3.14*rad*rad, 2*3.14*rad);
}
