/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many stars you need: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++){
//         printf("*"\n);
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}


