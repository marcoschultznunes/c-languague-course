#include <stdio.h>

/* 
    This example will be a mega exercise.

    It will consist of a person registration. Each person gets added to an array.
    
    Each person will have an id, a name, year of birth, and a spouse, 
    which will also be a person in the array.

    The id will be used to find the spouse, and to add the spouse.
*/

struct Person{
    int id;
    char* name;
    int year_of_birth;
    struct Person* spouse;
};

struct Person people_list[255];
int people_count = 0;

void printSpouse(struct Person* person){
    // Aqui fudeu tudo
    printf("\tSpouse id: %d \n", person->spouse->id);
    printf("\tSpouse name: %s \n", person->spouse->name);
    printf("\tSpouse year of birth: %d \n", person->spouse->year_of_birth);
}

void printPerson(struct Person* person){ 
    printf("Id: %d \n", person->id);
    printf("Name: %s \n", person->name);
    printf("Year of birth: %d \n", person->year_of_birth);
    printf("person->spouse->name(before if): %s \n", person->spouse->name);

    if(person->spouse){
        // printf("Person->id: %d \n", person->id);
        // printf("Person->name: %s \n", person->name);
        // printf("Person->spouse->name(in if): %s \n", person->spouse->name);
        printf("Spouse: \n");
        printSpouse(person);
    }

    printf("\n");
}

struct Person* findPerson(int id){
    for(int i=0; i<people_count; i++){
        if(people_list[i].id == id){
            struct Person* personPointer = &people_list[i];
            return personPointer;
        }
    }
}

void updateSpouse(int target_id, struct Person* newSpouse){
    // printf("\nspouse id: %d \n", newSpouse->id);
    // printf("spouse name: %s \n\n", newSpouse->name);

    struct Person* target = findPerson(target_id);

    // printf("\ntarget id: %d \n", target->id);
    // printf("target name: %s \n\n", target->name);

    target->spouse = newSpouse;
}

int savePerson(char* name, int year_of_birth, int spouse_id){
    struct Person newPerson;

    newPerson.id = people_count + 1;
    newPerson.name = name;
    newPerson.year_of_birth = year_of_birth;

    if(spouse_id > 0){
        newPerson.spouse = findPerson(spouse_id);
        updateSpouse(spouse_id, &newPerson);
    }

    people_list[people_count] = newPerson;
    people_count++;

    return newPerson.id;
}

int main(int argc, char const *argv[])
{
    int p1_id = savePerson("Jefferson Santos", 1995, 0);
    int p2_id = savePerson("Linus Torvalds", 1969, 0);
    int p3_id = savePerson("Keanu Reeves", 1964, 1);

    struct Person* p1 = findPerson(p1_id);
    struct Person* p2 = findPerson(p2_id);
    struct Person* p3 = findPerson(p3_id);


    // printf("%d \n", p1->id);
    // printf("%s \n", p1->name);
    // printf("%d \n", p1->year_of_birth);
    // printf("\n");
    // printf("%d \n", p2->id);
    // printf("%s \n", p2->name);
    // printf("%d \n", p2->year_of_birth);
    // printf("\n");
    // printf("%d \n", p3->id);
    // printf("%s \n", p3->name);
    // printf("%d \n", p3->year_of_birth);
    // printf("\n");

    // updateSpouse(1, p3);

    printPerson(p1);
    printPerson(p2);
    printPerson(p3);

    return 0;
}
