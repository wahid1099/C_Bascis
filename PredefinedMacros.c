#include <stdio.h>
int main()
{
    printf(__TIME__);
    printf(__FILE__);
    // printf("%d\n", __STDC__);
    printf(__LINE__);

    return 0;
}