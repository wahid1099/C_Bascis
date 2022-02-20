#include <stdio.h>
int main()
{
    char productname[100], productdetails[200];
    float buyingprice;
    int sellingprice, stockammount;

    printf("Input the produt name: ");
    gets(productname);
    printf("Input short description of the product: ");
    gets(productdetails);
    printf("Input the buying price(Per KG):");
    scanf("%f", &buyingprice);
    printf("Input the selling price(Per KG):");
    scanf("%d", &sellingprice);
    printf("Input the stock ammount of the onion in KG:");
    scanf("%d", &stockammount);

    printf("Product Name :%s\n", productname);
    printf("Product Description :%s\n", productdetails);
    printf("Buying Price :%.1f\n", buyingprice);
    printf("Selling price :%d\n", sellingprice);
    printf("Onion in stock :%d\n", stockammount);

    return 0;
}