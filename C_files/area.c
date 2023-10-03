#include<stdio.h>
int main () {
	float area, rad ;

	printf("Enter the radius of the circle\n") ;
		scanf("%f", &rad) ;

		area = 3.14*rad*rad ;

	printf("The area of the circle with radius %f is %f.\n", rad, area) ;
	return 0 ;
	}
