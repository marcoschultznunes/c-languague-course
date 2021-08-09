#include <stdio.h>
#include <math.h>

int main()
{
    int a = 7;
    int b = 4;

    float div = (float)(a) / (float)(b); // 7 / 4 = 1.75

    printf("Result = %.2f \n", div);

    int floored = floor(div);
    int rounded = round(div);

    printf("Floored: %d \n", floored);
    printf("Rounded: %d \n", rounded);

    return 0;
}

/*
    NOTE: If it fails to compile because of the math library, add -static and -lm to the 
    execution code on the terminal before the -o flag:

    cd "/home/marcola/Desktop/Code/C/introduction/section04-math/" && 
    gcc ex01-math.c -static -lm -o ex01-math && 
    "/home/marcola/Desktop/Code/C/introduction/section04-math/"ex01-math

    On the vscode execute code.

    https://stackoverflow.com/questions/11336477/gcc-will-not-properly-include-math-h
*/
