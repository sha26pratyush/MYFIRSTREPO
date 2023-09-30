#include<stdio.h>
int main () {
	int a, b, remainder ;
	printf("Enter the first number:\n") ;
	scanf("%d" , &a) ;
	printf("Enter the second number:\n") ;
	scanf("%d" , &b) ;

	remainder = a % b ;
	printf("The remainder of the two numbers is:%d\n" , remainder) ;
	return 0 ;
}
