/*
* Module 7, Lecture 32.
* 12 april 2020
* Iteration: For loop part 2
*/

/*  WAP to print all natural numbers from 1 to 100 using for loop  */
#include <stdio.h>

int main()
{
    int n; // declaration of the iteration variable
// Begin of the loop
    // This has a statement inside the loop statement itself,
    // placed right before the (in)(de)crement of the
    // iteration variable, separated by comma.
    for (n=1; n<=100; printf("%d\t",n), ++n); // initial value for the iteration variable, loop condition, and (in)(de)crement of iteration variable
    // This for loop statement is ended in semicolon,
    // which will entail an immidiate execution of its
    // third part: printf("%d\t",n), ++n
    // Begin of loop block
       printf("\nThe control is out of the loop block");
    // End of loop block
// End of the loop
}
