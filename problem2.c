#include <stdio.h>
int main()
{
    float length, width;
    printf("Please Enter Length of the rectangle : ");
    scanf("%f", &length);
    printf("Please Enter width of the rectangle : ");
    scanf("%f", &width);
    if (length == width)
    {
        printf("It is a square!");
    }
    else
    {

        printf("Not a square");
    }

    return 0;
}