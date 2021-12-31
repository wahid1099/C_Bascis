#include <stdio.h>

void changeValue(int* address)
{
    *address = 37565;
}

int main()
{
    int a = 34, b =56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}


// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1

// void swap(int x, int y)
// {
// int temp;
// temp=x;
// x=y;
// y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(r, v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
//} 