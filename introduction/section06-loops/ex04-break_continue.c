#include <stdio.h>

int main(){
    
    for(int i=1; i <= 10; i++){
        if(i == 5){
            break; // stops
        }

        printf("Break - %d \n", i);
    }
    
    for(int i=1; i <= 10; i++){
        if(i == 5){
            continue; // skips
        }
        
        printf("Continue - %d \n", i);
    }

    return 0;
}
