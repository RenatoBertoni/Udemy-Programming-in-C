/*
* Module 7, Lecture 32.
* 12 april 2020
* Iteration: For loop part 2
*/

/*  WAP to print numbers from 1000 to 500 (in reverse order) using for loop
with an interval of 5  */
#include <stdio.h>
int main()
{
    int n = 1000; // declaration and initialization of the iteration variable

// Begin of the loop

    // Since the iteration variable has been already initialized along with its declaration, it is possible to leave the first part of the for loop statement blank (skipped)
    for ( ; n >= 500; printf("%d\t",n) ,n-=5);
    // Here, semicolon at the end makes third part executed first
    // The iteration variable is decremented by 5 each time
	// Begin of loop block
        printf("\nThe control is out of the loop block");
    // End of loop block
// End of the loop

}
