#include <stdio.h>
#include <string.h> // where strcopy is

void br(){
    printf("\n");
}

int main(int argc, char const *argv[]){
    char string_array[255][255];
    int array_length = 0;
    int to_insert;

    printf("Enter array length: ");
    scanf("%d", &to_insert);
    
    br();

    /* INPUT */
    while (to_insert > 0){
        char new_string[255];

        printf("%d strings remaining. Next string: ", to_insert);
        scanf(" %[^\n]s", new_string); // Do not scan directly into the string array

        // We need to use strcopy to add to the string array
        strcpy(string_array[array_length], new_string); 

        array_length++;
        to_insert--;
    }
    
    br();

    /* OUTPUT */
    for(int i=0; i<array_length; i++){
        printf("array[%d] -> %s \n", i, string_array[i]);
    }

    return 0;
}
