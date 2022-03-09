#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Please Enter Number1: ");
    scanf("%f", &num1);
    printf("Please Enter Number2: ");
    scanf("%f", &num2);
    if (num1 > num2)
    {
        printf("The greatest number is %.1f\n\n", num1);
        printf("The smallest number is %.1f\n", num2);
    }
    else
    {
        printf("The greatest number is %.1f\n\n", num2);
        printf("The smallest number is %.1f\n", num1);
    }

    return 0;
}