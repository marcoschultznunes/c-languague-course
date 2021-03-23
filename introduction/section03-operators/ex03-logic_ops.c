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

    /* NOT ! */
    printf("!a : %d \n", !a);

    printf("\n");

    /* OR || */
    printf("a == b or a == c : %d \n", a==b || a==c);

    /* AND && */
    printf("a == b and a == c : %d \n", a==b && a==c);
    
    return 0;
}
