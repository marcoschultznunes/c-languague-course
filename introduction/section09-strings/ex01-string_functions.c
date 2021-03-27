#include <stdio.h>
#include <string.h> // This library provides plenty of functions to work with strings.
#include <ctype.h> // Uppercase, lowercase, etc.

/*
    Note: toupper() and tolower() work only with a single character. To do it to a string, we 
    need to implement a function that loops it and uppercases/lowercases each character with
    toupper()/tolower().

    https://stackoverflow.com/questions/23618316/undefined-reference-to-strlwr
*/

char* strlwr(char* str){
    unsigned char *p = (unsigned char *)str;

    while (*p) {
        *p = tolower((unsigned char)*p);
        p++;
    }

    return str;
}

char* strupr(char* str){
    unsigned char *p = (unsigned char *)str;

    while (*p) {
        *p = toupper((unsigned char)*p);
        p++;
    }

    return str;
}

// In this case, the replace is case sensitive
char* strrpl(char *str, char old, char new){
    for(int i=0; i < strlen(str); i++){  
        if(str[i]==old){
            str[i]=new;
        }
    }

    return str;
}

int strsrch(char* str, char* substr){
    int substr_index;

    for(int i=0; i<strlen(str); i++){
        if(substr[0] == str[i]){
            int found = 1;
            
            for(int l=0; l<strlen(substr); l++){
                if(substr[l] != str[i + l]){
                    found = 0;
                }
            }

            if(found){
                return i;
            }
        }
    }
    
    return -1;
}

int main(int argc, char const *argv[])
{
    char str[] = "Hello There";
    char str2[255] = "Olá ";
    char* str3 = "Mundo!";

    printf("String: %s \n", str);
    printf("Length: %lu \n", strlen(str)); // strlen => long unsigned int => %lu
    printf("Uppercase: %s \n", strupr(str));    
    printf("Lowercase: %s \n", strlwr(str));
    printf("a replaces e: %s \n", strrpl(str, 'e', 'a'));
    printf("\n");
    printf("String 2: %s \n", str2);
    printf("String 3: %s \n", str3);

    // NOTE: the string might not have enough space, causing a Segmentation fault error.
    strcat(str2, str3);

    printf("String 2 + String 3: %s \n", str2);
    printf("\"ndo\" in %s: %d \n", str2, strsrch(str2, "ndo"));
    printf("\n");

    return 0;
}

/*
    trim => more complex algorithm

    So, in C language, we need to program ourselves most of the string functions.
*/
