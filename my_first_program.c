//
//  my_first_program.c
//  
//
//  Created by Jayke Peters on 4/2/19.
//

#include <stdio.h>

char name[] = "Jayke";
int age = 15;

void greeting()
{
    printf("Hello, %s! \n", name);
    printf("You are %d years old. \n", age);
    
}

void interview()
{
    int favoriteNumber;
    char favoriteColor[10];

    printf("What's your favorite number?: ");
    scanf("%d", &favoriteNumber);
    
    printf("What's your favorite color?: ");
    scanf("%9s", favoriteColor);

    printf("%d is a nice number! \n", favoriteNumber);
    printf("%s is a nice color! \n", favoriteColor);
}

int main()
{
    greeting();
    interview();
    
    // Exit with code zero
    return 0;
}
