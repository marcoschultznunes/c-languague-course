#include <stdio.h>
#include <stdlib.h>

void br(){
    printf("\n");
}

int main()
{
    int a = 15;

    br();
    printf("a = %d \n", a);
    printf("&a = %p \n", &a);
    br();

    return 0;
}
