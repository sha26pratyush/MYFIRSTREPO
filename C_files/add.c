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

printf("Sum of the two numbers is %d.\n Subtraction of the two numbers is %d.\n Multiplication of the two numbers is %d.\n Division of the two numbers is %d.\n", sum, sub, multi, div);

return 0;
}
