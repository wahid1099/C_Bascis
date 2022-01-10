// #include <stdio.h>
// struct book
// {
//     char title[20];
//     char Author_name[100];
//     float price;
//     int pages;
// };
// int main()
// {
//     struct book book1 = {"Cprogramming", "ABC", 130.00, 550};
//     printf("\n Title = %s", book1.title);
//     printf("\n Name = %s", book1.Author_name);
//     printf("\n Price = %.2f", book1.price);
//     printf("\n Pages = %d", book1.pages);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;
// struct Student harry, ravi, shubham;

void print()
{
    printf("%s", harry.name);
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';
    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(shubham.name, "Shubham Kumar");
    // printf("Harry got %d marks\n", harry.marks);
    // printf("Harry's name is: %s\n", harry.name);
    // printf("Shubham got %d marks\n", shubham.marks);
    // printf("Shubham's name is: %s\n", shubham.name);
    print();
    // Quick Quiz
    // print all the information of a given student

    return 0;
}
