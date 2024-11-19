/* 
    * CS50 2020 Lecture 4 - Memory
    * This is a simple implementation of a Sting as an Array in c
*/
#include <stdio.h>
#include "cs50.h"
int main(void)
{
    string s ="HI!";
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    /*
        which prints out the whole array of characters in the string
        $ ./memory.exe
            00405064 ---H
            00405065 ---I
            00405066 ---!
    */
}