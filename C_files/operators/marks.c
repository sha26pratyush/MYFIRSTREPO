#include<stdio.h>
int main(void)
{
	int phy, che, math, bio, cse ;
	printf("Enter the marks obtained in Physics: \n");
	scanf("%d", &phy);
	printf("Enter the marks obtained in Chemistry: \n");
	scanf("%d" , &che);
	printf("Enter the marks obtained in Maths: \n");
	scanf("%d" , &math);
	printf("Enter the marks obtained in Biology: \n");
	scanf("%d" , &bio);
	printf("Enter the marks obtained in CSE: \n");
	scanf("%d" , &cse);
	
float total=phy+che+math+bio+cse ;
float required=165 ; /*Out of 500. */

	(total >= required)?printf("PASS!\n"):printf("FAIL!\n") ;
} 

