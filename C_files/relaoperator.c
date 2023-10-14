/* Program using relational operators */

#include<stdio.h>
int main(void)
{
	int a, b, c, d, f;
	printf("Enter the first number:\nEnter the second number:\nEnter the third number:\n");
	scanf("%d %d %d" , &a, &b, &c);
d=a>b==c; f=a<b!=c ;

printf("Value of relation \"D = A>B == C\" is %d\nVale of the relation \"F = A<B != C\" is %d\n", d, f); 
}

