#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* JAYKE'S FIRST C PROGRAM */
int favoriteNumber = 17;
char name[] = "Jayke"; 
int age = 15;

/* Hello World */
void hello(char name[], int age) {printf("Hello, my name is %s.\nI am %i years old.\n", name, age);}

/* For Loop */
void Numcounter(int max) {
    int i;

    printf("My favorite number is: %d", max);
    for (i = 0; i <= max; i++) {
        printf("%d \n", i);
    }
}

void switcher(int anything) {
    switch(anything) {
        case 0:
            printf("Number is ZERO!\n");
            break;
        case 17:
            printf("Hey, 17 is my favorite number!\n");
            break;
        default:
            printf("This is the \"USUAL\"\n");
    }
}

int execute(char command[]) {
    int exitCode = 0;
    int error;
    
    /* Run the command, exit status */
    error = system(command);
    if (error != 0) {exitCode = 1;}
    printf("%d \n", exitCode);

    return exitCode;
}

int main() {
    hello(name, age);
    Numcounter(favoriteNumber);
    switcher(17);
    return 0;
}
