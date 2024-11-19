/* 
    * CS50 2020 Lecture 3 - Algorithms
    * This is a simple implementation of a Phonebook in code
*/

#include "cs50.h"
#include <stdio.h>
#include "string.h"

typedef struct{
    string name;
    string number;
}
person;

int main(void) {
    person people[2];
    people[0].name = "Brian";
    people[0].number ="+1 617-495-1000";

    people[1].name = "David";
    people[1].number ="+1-947-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, "David") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1; 
}

