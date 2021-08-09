#include <stdio.h>

int main(){

    int a = 5;
    float b = 14;
    double c = 8.92;
    char d = 'Y';

    printf("int - %lu bytes \n", sizeof a); // int => 4 bytes
    printf("float - %lu bytes \n", sizeof b); // float => 4
    printf("double - %lu bytes \n", sizeof c); // double => 8
    printf("char - %lu byte \n", sizeof d); // char => 1 

    return 0;
}
