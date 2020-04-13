/*
* Module 7, Lecture 31.
* 12 april 2020
* Iteration: For loop
*/

/*  WAP to print all natural numbers from 1 to 100 using for loop  */
#include <stdio.h>
int main()
{
    int n; // Declaration of iteration variable

// Begin of the loop
    for (n = 1;   n <= 100;     ++n) // initial value for the iteration variable, loop condition, and (in)(de)crement of iteration variable
    { // Begin of loop block
        printf("%d\t",n) ;
    } // End of loop block
// End of the loop

    printf("\nThe control is out of the loop block");
}
