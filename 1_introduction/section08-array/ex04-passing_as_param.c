#include <stdio.h>
#include <string.h>

/*
    In this example, we'll rewrite the previous example, separating the input and output 
    functions from the main.
*/

char string_array[255][255];
int array_length = 0;

void br(){
    printf("\n");
}

void insertElements(char arr[255][255], int length){
    int to_insert;

    printf("Enter how many strings to add: ");
    scanf("%d", &to_insert);
    
    br();

    while (to_insert > 0){
        char new_string[255];

        printf("%d strings remaining. Next string: ", to_insert);
        scanf(" %[^\n]s", new_string);

        strcpy(string_array[array_length], new_string); 

        array_length++;
        to_insert--;
    }
    
    br();
}

void printArray(char arr[255][255], int length){
    for(int i=0; i<length; i++){
        printf("array[%d] -> %s \n", i, arr[i]);
    }

    br();
}

int main(int argc, char const *argv[]){
    int opt;

    while (opt != 0){
        printf("====================================== \n");
        printf("Main Menu \n");
        br();
        printf("1) Insert elements \n");
        printf("2) List items \n");
        br();
        printf("Option: ");
        scanf("%d", &opt);

        br();

        switch (opt){
            case 0: 
                return 0;
            case 1:
                insertElements(string_array, array_length);
                break;
            case 2:
                printArray(string_array, array_length);
                break;
        }
    }
}
