#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char* name;
    int age;
    char* occupation;
} typedef Person;

// VERY COMMON PATTERN IN C:
// To initialize and return a pointer, we allocate the memory, and return its pointer
Person* personInit(char* name, int age, char* occupation){
    Person* p = malloc(sizeof(Person)); // Allocate and return pointer
    p->name = strdup(name);
    p->age = age;
    p->occupation = strdup(occupation);
    return p;
}

void printPerson(Person* p){ // Now we make a function that accepts a pointer
    printf("\n");
    printf("%s \n", p->name);
    printf("%d \n", p->age);
    printf("%s \n", p->occupation);
}

int main(){
    Person* p1 = personInit("Valdomiro", 56, "Software Engineer");
    Person* p2 = personInit("Claudioaldo", 61, "Computer Scientist");

    printPerson(p1);
    printPerson(p2);

    return 0;
}

/*
    Note:

    strdup => copies the string instead of passing reference. This means that if we pass 
    a string that will eventually be modified or destroyed, when it does, only the original
    one will be affected.

    Library: string.h


    malloc => manually allocates memory, returning a pointer.
    
    Library: stdlib.h
*/
