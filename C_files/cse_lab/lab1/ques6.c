#include <stdio.h>

int main(void) {
    float v, u, a, t;

//program to calculate speed equations
	printf("Enter the initial speed: ");
    scanf("%f", &u);
    printf("Enter the acceleration: ");
    scanf("%f", &a);
    printf("Enter the time traveled: ");
    scanf("%f", &t);

    v = u + a * t;
    printf("The Final Speed (v) is %f.\n", v);

//program to calculate s=ut+1/2at*t 
    return 0;
}

