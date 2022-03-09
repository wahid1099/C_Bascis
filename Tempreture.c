#include <stdio.h>

int main()
{
    float c, f;
    int choice;

    printf("Please Enter Your Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the tempreture in celcius : ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("%.f cecius is %.1f farenhiet", c, f);
    }
    else if (choice == 2)
    {

        printf("Enter the tempreture in farenihte : ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf(" %.1f farenhiet is %.1f celcious", f, c);
    }

    return 0;
}
