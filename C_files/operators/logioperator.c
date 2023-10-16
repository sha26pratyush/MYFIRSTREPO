/*Program for logical OR operator*/
#include<stdio.h>

int main(void)
{
int res,a,b;
printf("Enter the two numbers\n");
	scanf("%d%d" , &a,&b);

res=(a>=10 || b==20);
printf("returned value in res\"A>=10 || B==20\" is %d\n",res);
}
