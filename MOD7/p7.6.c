/*
* Module 7, Lecture 33.
* 12 april 2020
* Iteration: For loop part 3
*/

/*  WAP to print numbers from 1000 to 500 (in reverse order) using for loop
with an interval of 5  */
#include <stdio.h>
int main()
{
    int n = 1000; // declaration and initialization of the iteration variable
    printf("\t");
// Begin of the loop
    for ( ; n >= 500; printf("%d\t",n), n-=5)
    // First part also omitted, and no semicolon
    // Begin of loop block
        printf(" Java");
        printf("\nThe control is out of the loop block");
    // End of loop block
// End of the loop
}
