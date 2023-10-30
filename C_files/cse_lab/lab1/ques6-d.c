// Program to calculate Hypotenuse of a right angled triangle

#include<stdio.h>
#include<math.h>

int main() {
	float H, B, P;

	printf("Enter the length of the base and the perpendicular respectively\n");
	scanf("%f%f", &B, &P);

H = sqrt(P) + sqrt (B);
	
	printf("The length of the Hypotenuse is %f\n", H);

return 0;
}
