#include <stdio.h>
#include <stdlib.h>

void br(){
    printf("\n");
}

int main()
{
    int a = 15;
    int random = 30;
    int* b = &a;

    a = 20;

    br();
    printf("b = %d \n", *b);
    printf("&a = %p \n", &a);
    printf("&b = %p \n", &b);
    br();

    return 0;
}
