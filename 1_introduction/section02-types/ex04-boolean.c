#include <stdio.h>

/*
    In C language, comparisons return 1 for true and 0 for false. There is no boolean type.
*/

int main()
{
    int a = 10;

    printf("10 > 5 ? %d \n", a > 5);
    printf("10 > 1000 ? %d \n", a > 1000);

    return 0;
}
