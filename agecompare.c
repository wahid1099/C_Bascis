#include <stdio.h>
int main()
{

    int fatherAge, Motherage, uncleAge;

    printf("Enter your father age : ");
    scanf("%d", &fatherAge);
    printf("Enter your mother age : ");
    scanf("%d", &Motherage);
    printf("Enter your uncle age : ");
    scanf("%d", &uncleAge);
    if (fatherAge > Motherage && fatherAge > uncleAge)
    {
        printf("Your Father is Oldest Man\n");
        if (Motherage > uncleAge)
        {
            printf("Your uncle is youngest Man\n");
            printf("Your Mother  age is between oldest and youngest\n");
        }
        else
        {
            printf("Your Mother is youngest person\n");
            printf("Your uncle  age is between oldest and youngest\n");
        }
    }
    else if (Motherage > fatherAge && Motherage > uncleAge)
    {
        printf("Your Mother is Oldest Person\n");
        if (fatherAge > uncleAge)
        {
            printf("Your uncle is youngest Man\n");
            printf("Your Fahter  age is between oldest and youngest\n");
        }
        else
        {
            printf("Your Father is youngest person\n");
            printf("Your uncle  age is between oldest and youngest\n");
        }
    }
    else if (uncleAge > fatherAge && uncleAge > Motherage)
    {
        printf("Your Unlce is Oldest Person\n");
        if (fatherAge > Motherage)
        {
            printf("Your Mother is youngest Person\n");
            printf("Your Fahter  age is between oldest and youngest\n");
        }
        else
        {
            printf("Your Father is youngest person\n");
            printf("Your Mother  age is between oldest and youngest\n");
        }
    }

    return 0;
}