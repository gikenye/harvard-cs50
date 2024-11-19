/* 
    * CS50 2020 Lecture 4 - Memory
    * Switching from using the cs50 library `string.h` to the
    * raw `char`datatype as defined in c to represent strings
*/
#include <stdio.h>
int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%i\n", *(s+3)); //this is the last character that shows the end of the string
}
/*
    prints out the individual characters of the string

    $ ./memory2.exe 
        H
        I
        !
        0
*/