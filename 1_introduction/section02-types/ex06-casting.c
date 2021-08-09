#include <stdio.h>

int main()
{
    int a = 9;
    int b = 4;

    int int_division = a/b; // Floors 

    float float_division = (float)(a) / (float)(b); // Gets the proper result

    printf("%d \n", int_division);
    printf("%.2f \n", float_division);

    return 0;
}
