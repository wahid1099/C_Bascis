#include <stdio.h>
int main()
{
    int food_code, stock;
    float selling_price;
    char foodName[100], foodDescription[200];

    printf("Enter Food Name: ");
    gets(foodName);
    printf("Enter Food Description: ");
    gets(foodDescription);
    printf("Enter Food Code: ");
    scanf("%d", &food_code);
    printf("Enter Food stock: ");
    scanf("%d", &stock);
    printf("Enter Food Selling Price: ");
    scanf("%f", &selling_price);

    printf("Food Name: %s \n", foodName);
    printf("Food Description: %s \n", foodDescription);
    printf("Food Code: %d \n", food_code);
    printf("Food Stock: %d \n", stock);
    printf("Food Code: %.3f \n", selling_price);

    return 0;
}