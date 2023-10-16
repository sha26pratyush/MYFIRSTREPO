#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int phy, che, math, eng, cse;
    char name[15];

    printf("Enter your first name: ");
    fgets(name, 15, stdin);
    printf("Hello %s", name);

    printf("\nEnter the marks obtained in Physics: ");
    scanf("%d", &phy);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &che);
    printf("Enter the marks obtained in Maths: ");
    scanf("%d", &math);
    printf("Enter the marks obtained in English: ");
    scanf("%d", &eng);
    printf("Enter the marks obtained in CSE: ");
    scanf("%d", &cse);

    int res = (phy <= 100 && che <= 100 && math <= 100 && eng <= 100 && cse <= 100);

    if (res == 0) {
        printf("\n\nMarks in a subject cannot be more than 100.\nExiting program...\n");
        exit(1);
    }

    float total = phy + che + math + eng + cse;
    float percentage = total / 500 * 100;
    float required = 33; 

    printf("The percentage obtained is %f\n", percentage);

(percentage >= required) ? printf("PASS!\n") : printf("FAIL!\n");

return 0;
}

