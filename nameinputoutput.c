#include <stdio.h>
int main()
{
    char name[50], dob[50];
    int age, phone;
    float gpa;

    printf("My Name   : Sajjjad sheikh one plus\n");
    printf("My DOB    : July 14,2001\n");
    printf("Age       : 18n");
    printf("My Mobile : +88018314597848\n");

    printf("Please Enter your name: ");
    gets(name);
    printf("Please enter your data of birth: ");
    gets(dob);
    printf("What is your age?: ");
    scanf("%d", &age);
    printf("What was your HSC result in GPA: ");
    scanf("%f", &gpa);

    printf("What is you mobile Number: ");
    scanf("%d", &phone);

    printf("My name :%s \n", name);
    printf("My DOB :%s \n", dob);
    printf("My age :%d \n", age);
    printf("HSC GPA :%.1f \n", gpa);
    printf("My Mobile :%d \n", phone);

    return 0;
}