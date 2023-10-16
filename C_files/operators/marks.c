#include<stdio.h>
int main(void)
{
	int phy, che, math, bio, cse;
	char name[15];
	printf("Enter your first name: \n");
	fgets(name, 15, stdin);
	printf("You are %s \n", name);
	printf("Enter the marks obtained in Physics: ");
	scanf("%d", &phy);
	printf("Enter the marks obtained in Chemistry: \n");
	scanf("%d" , &che);
	printf("Enter the marks obtained in Maths: \n");
	scanf("%d" , &math);
	printf("Enter the marks obtained in Biology: \n");
	scanf("%d" , &bio);
	printf("Enter the marks obtained in CSE: \n");
	scanf("%d" , &cse);
	

float total=phy+che+math+bio+cse,
     percentage=total/500 * 100 ;
float required=165 ; /*Out of 500. */

printf("The percentage obtained is %f \n" , percentage) ;
	(total >= required)?printf("PASS!\n"):printf("FAIL!\n") ;
} 

