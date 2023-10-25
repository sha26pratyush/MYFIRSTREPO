#include <stdio.h>

int main(void) {

	int a, b;

	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
        scanf("%d", &b);

	if (a > b) {
		printf("First number is greater than the second.\n");
	}
	else if (a < b) {
		printf("Second number is greater than the first.\n");
	}
	else { 
		printf("Both the numbers are equal!\n");
	}
} 
