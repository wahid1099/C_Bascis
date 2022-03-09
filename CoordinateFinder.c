#include <stdio.h>
int main()
{
    float co1, co2;

    printf("Please Enter the values  X  coordinate point : ");
    scanf("%f", &co1);
    printf("Please Enter the values  Y  coordinate point: ");
    scanf("%f", &co2);

    if (co1 > 0 && co2 > 0)
    {
        printf("The coordinate point (%.1f,%.1f) lies in the First quandrant.\n", co1, co2);
    }

    else if (co1 < 0 && co2 > 0)
    {
        printf("The coordinate point (%.1f,%.1f) lies in the Second quandrant.\n", co1, co2);
    }
    else if (co1 < 0 && co2 < 0)
    {
        printf("The coordinate point (%.1f,%.1f)) lies in the Third quandrant.\n", co1, co2);
    }
    else if (co1 > 0 && co2 < 0)
    {
        printf("The coordinate point (%.1f,%.1f) lies in the Fourth quandrant.\n", co1, co2);
    }

    return 0;
}