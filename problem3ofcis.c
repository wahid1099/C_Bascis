#include <stdio.h>
int main()
{
    int workingyear, total_salary, bonus;

    printf("How many years you working at DSL : ");
    scanf("%d", &workingyear);
    printf("Please Enter your Current salary: ");
    scanf("%d", &total_salary);
    if (workingyear >= 5)
    {
        bonus = total_salary / 10;
        printf("Congratulations! You will get %d taka bonus!", bonus);
    }
    else
    {
        printf("You are not eligible");
    }

    return 0;
}