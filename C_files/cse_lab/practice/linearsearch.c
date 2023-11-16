#include<stdio.h> 

int main()
{
	int a[6]={10,11,12,13,14,15}, i=0, item;
	
	printf("Input a number for searching: \n");
	scanf("%d",&item);

	while(i<6) {
		if(a[i]==item) {
			printf("Item found!!\nArray location is %d.\n",i);
			break;
		}
	i++;
	}
	if(i>=6){
		printf("Item is not found.\n");
	}
}
