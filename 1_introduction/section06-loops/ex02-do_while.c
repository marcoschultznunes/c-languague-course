#include <stdio.h>

int main()
{
    int n = 10;

    while (n < 10)
    {
        printf("While - %d \n", n); // Never executes
        n++;
    }

    n = 10;    

    do{
        printf("Do while - %d \n", n); // Executes once
        n++;
    } while(n < 10);

    return 0;
}
