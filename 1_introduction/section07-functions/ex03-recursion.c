#include <stdio.h>

int countBackwards(int n){
    if(n < 0){
        return 0;
    }

    printf("%d \n", n);

    countBackwards(n - 1); // Recursion => function calls itself to perform a task piece by piece
}

int main(){
    countBackwards(6);

    return 0;
}
