#include <stdio.h>

int sum2(int n1, int n2){
    return n1+n2;
}

int main()
{
    int a = 10;
    int b = 24;

    printf("%d + %d = %d \n", a, b, sum2(a, b));

    return 0;
}
