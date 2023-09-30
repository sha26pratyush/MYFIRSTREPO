#include<stdio.h>
int main () {

int a, b, sum, sub, multi, div ;

printf("Enter the first number\n");
	scanf("%d" , &a);

printf("Enter the second number\n");
	scanf("%d" , &b);

sum = a + b ;
sub = a - b ;
multi = a*b ;
div = a / b ; 

printf("\nAddition of the two numbers %d and %d is %d.\nSubtraction of the two numbers %d and %d is %d.\nMultiplication of the two numbers %d and %d is %d.\nDivision of the two numbers %d and %d is %d.\n", a, b, sum, a, b, sub, a, b, multi, a, b, div);

return 0;
}
