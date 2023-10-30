/* program to perform addition, subtraction, division and
multiplication of two number */

#include<stdio.h>
int main () {

float a, b, sum, sub, multi, div ;

printf("Enter the first number\n");
	scanf("%f" , &a);

printf("Enter the second number\n");
	scanf("%f" , &b);

sum = a + b ;
sub = a - b ;
multi = a*b ;
div = a / b ; 

printf("\nAddition of the two numbers %f and %f is %f.\nSubtraction of the two numbers %f and %f is %f.\nMultiplication of the two numbers %f and %f is %f.\nDivision of the two numbers %f and %f is %f.\n", a, b, sum, a, b, sub, a, b, multi, a, b, div);

return 0;
}

