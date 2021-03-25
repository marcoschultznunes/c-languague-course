#include <stdio.h>

// void => function without return
void println(char str[]){
    printf("%s \n", str);
}

void br(){
    println("");
}

int main()
{
    br();
    println("Hello there!");
    println("The angel from my nightmare...");
    br();
    println("Where are you?");
    println("And i'm so sorry...");
    br();

    return 0;
}
