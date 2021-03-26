#include <stdio.h>

int array[255];
int array_length = 0; // We need to keep track of how many elements are in the array

void println(char str[]){
    printf("%s \n", str);
}
void br(){
    println("");
}

int arrayInsertion(){
    int to_insert;

    br();
    println("How many integers to insert to the array:");
    scanf("%d", &to_insert);

    br();
    println("--------------------------------------");

    while(to_insert > 0){
        br();
        printf("%d values remaining. Enter next integer: ", to_insert);
        scanf("%d", &array[array_length]);
        array_length++;
        to_insert--;
    }
    
    br();
}

int listArray(){
    br();

    for(int i=0; i < array_length; i++){
        printf("array[%d] -> %d \n", i, array[i]);
    }

    br();
}

int mainMenu(){
    int opt;

    while (opt != 0){
        println("=================================================");
        br();
        println("Main Menu:");
        br();
        println("0) Exit");
        println("1) Add to array");
        println("2) List array");
        br();
        println("Option: ");

        scanf("%d", &opt);

        switch (opt){
            case 0: 
                return 0;
            case 1: arrayInsertion();
                break;
            case 2: listArray();
                break;
        }
    }
}

int main(){
    mainMenu();

    return 0;
}
