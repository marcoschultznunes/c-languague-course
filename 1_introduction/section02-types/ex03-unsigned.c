#include <stdio.h>

int main()
{
    /* 
        In C, we can make an int variable unsigned by just adding the unsigned type.
    */
       
    unsigned int a = 10;
    unsigned char b = 'A';

    printf("unsigned int a = %u \n", a); // %u => unsigned int
    printf("unsigned char b = %c \n", b); // same as char

    return 0;
}

/*
    NOTE 1: unsigned char, means that the ASCII code entered must always be positive.
    NOTE 2: assigning a negative value does not throw error.
*/
