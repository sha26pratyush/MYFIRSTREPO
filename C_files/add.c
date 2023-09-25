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

printf("Sum of the two numbers is %d \n", sum);
printf("Subtraction of the two numbers is %d \n", sub);
printf("Multiplication of the two numbers is %d \n", multi);
printf("Division of the two numbers is %d \n", div);

return 0;
}
