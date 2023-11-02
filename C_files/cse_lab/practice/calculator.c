// this program creates a calculator using switch case

#include<stdio.h>

int main() {

char op;
	printf("Select an Operator (+, -, *,/)\n");
	scanf("%c", &op);

float n1, n2;
	printf("Enter the first number: ");
	scanf("%f", &n1);
	printf("Enter the second number: ");
	scanf("%f", &n2);

switch(op) {
	case'+':
	printf("Sum of the two numbers is %f\n", n1+n2);
	break;
	case'-':
	printf("Subtraction of the two numbers is %f\n", n1-n2);
	break;
	case'*':
	printf("Multiplication of the two numbers is %f\n", n1*n2);
	break;
	case'/':
	printf("Division of the two numbers is %f\n", n1/n2);
	break;
	default:
	printf("Invalid operator.\nExitiing program...\n");
}

return 0;
}		
