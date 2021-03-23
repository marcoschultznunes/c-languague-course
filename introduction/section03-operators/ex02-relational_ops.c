#include <stdio.h>

int main()
{   
    int a = 10;
    int b = 5;
    float c = 10;

    printf("int a = 10 \n");
    printf("int b = 5 \n");
    printf("float c = 10 \n");
    printf("\n");

    /* Relational ops */
    printf("a > b : %d \n", a > b);
    printf("a < b : %d \n", a < b);
    printf("a > c : %d \n", a > c);
    printf("a >= c : %d \n", a >= c);
    printf("a == c : %d \n", a == c);
    printf("a != c : %d \n", a != c);

    return 0;
}
