#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int month = rand() % 13; // 0-12   

    printf("Month %d \n", month);

    switch (month){
        case 1:
            printf("January \n");
            break;
        case 2:
            printf("Februrary \n");
            break;
        case 3:
            printf("March \n");
            break;
        case 4:
            printf("April \n");
            break;
        case 5:
            printf("May \n");
            break;
        case 6:
            printf("June \n");
            break;
        case 7:
            printf("July \n");
            break;
        case 8:
            printf("August \n");
            break;
        case 9:
            printf("September \n");
            break;
        case 10:
            printf("October \n");
            break;
        case 11:
            printf("November \n");
            break;
        case 12:
            printf("December \n");
            break;
        default:
            printf("An error has ocurred. \n");
    }

    return 0;
}
