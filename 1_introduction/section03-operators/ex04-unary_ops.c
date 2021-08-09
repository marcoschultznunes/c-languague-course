#include <stdio.h>

int main()
{
    int a = 10;

    a++;

    printf("%d \n", a); // 11    

    a--;
    a--;

    printf("%d \n", a); // 9

    return 0;
}
