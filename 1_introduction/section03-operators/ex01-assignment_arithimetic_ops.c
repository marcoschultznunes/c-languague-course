#include <stdio.h>

int main()
{
    /* Declaring vars */
    int a;
    int b = 10;

    
    /* Assignment ops */
    a = 0;
    a += 10; // 10
    a -= 5; // 5
    a *= 100;  // 500
    a /= 20; // 25    

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    
    /* Arithimetic ops */
    printf("a + b = %d \n", a+b); // a+b
    printf("a - b = %d \n", a-b); // a-b
    printf("a * b = %d \n", a*b); // a*b
    printf("a / b = %.1f \n", (float)(a)/(float)(b)); // a/b
    printf("a %% b = %d \n", a%b); // a%b


    return 0;
}
