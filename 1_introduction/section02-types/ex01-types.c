#include <stdio.h>

int main(){

    /* The primitive types: */
    int a = 5;
    float b = 14;
    double c = 8.92;
    char d = 'Y';

    /* String => array of chars */
    char e[] = "Hello There";

    /* NULL => can be assigned to any type */
    char *f = NULL;

    /* printing each type: */
    printf("a = %d \n", a); // %d => int
    printf("b = %.2f \n", b); // %.2f => float with 2 digits
    printf("c = %.2lf \n", c); // %lf => double
    printf("d = %c \n", d); // %c => char
    printf("ASCII d = %d \n", d); // %d => prints char ASCII value
    printf("e = %s \n", e); // %s => string
    printf("f = %s \n", f); // %s => prints null, but gives a warning if the variable type is not char*

    return 0;
}
