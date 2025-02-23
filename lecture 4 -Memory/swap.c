
/* 
    * CS50 2020 Lecture 4 - Memory
    * This is a simple implementation of a swapping values in c
*/
#include <stdio.h>

void swap(int *a, int *b);
int main(void)
{
    int x=1;
    int y=2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}
void swap(int *a, int *b)
{
    printf("a is %i, b is %i\n", a, b);//memory address
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("a is %i, b is %i\n", a, b);

}