#include <stdio.h>

int main()
{
    /* 
        scanf receives an input from the user, writing it to a variable
    */

    int a;
    float b;
    double c;
    char d;
    char e[255];

    /* int */
    printf("Enter an integer: \n");
    scanf("%d", &a);

    /* float */
    printf("\n");
    printf("Enter a float: \n");
    scanf("%f", &b);

    /* double */
    printf("\n");
    printf("Enter a double: \n");
    scanf("%lf", &c);
 
    /* char */
    printf("\n");
    printf("Enter a character: \n");
    scanf(" %c", &d); // NOTE: " %c"

    /* string */
    printf("\n");
    printf("Enter a string: \n");
    scanf(" %[^\n]s", e); // NOTE: no &; " %[^\n]s" => will allow the string to have whitespaces.

    /* printing */
    printf("\n");
    printf("The integer: %d \n", a);
    printf("The float: %f \n", b);
    printf("The double: %lf \n", c);
    printf("The char: %c \n", d);
    printf("The string: %s \n", e);

    return 0;
}

/* 
    NOTE: 
        The scan character bug => When you scan a character after another scan,
        an empty space is scanned, skipping the character. To solve this, we add a whitespace 
        inside the scanf param.

        Ex: 
            scanf("%c", &d); => is skipped
            scanf(" %c", &d); => problem solved

    https://stackoverflow.com/questions/5109512/problem-in-scanning-character-in-c
*/
