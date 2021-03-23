#include <stdio.h>

int main()
{
    int a = 10;
    int b = 15;

    int biggest = a > b ? a : b;

    printf("%d \n", biggest); // 15

    return 0;
}
