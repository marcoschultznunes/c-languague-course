#include <stdio.h>
#include <time.h> // Where the time() function is
#include <stdlib.h> // Where the rand() function is located

int main()
{
    srand(time(NULL)); // Sets the random function's seed
    int n = rand() % 21; // Random number from 0-20

    printf("n = %d \n", n);

    if(n > 10){
        printf("n > 10 \n");
    } else if(n < 10){
        printf("n < 10 \n");
    } else{
        printf("n == 10 \n");
    }

    return 0;
}
