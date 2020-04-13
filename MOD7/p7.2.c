/*
* Module 7, Lecture 30.
* 12 april 2020
* Iteration: Do ... While loop
*/
/*  WAP to print all natural numbers from 1 to 100 using do .. while loop*/

#include <stdio.h>
int main()
{
   int n = 1; // Declaration and initialization of iteration variable
	// In the case of this loop, the initial value of the
	// iteration variable will no prevent the first
	// exectution of the loop block

// Begin of the loop
   do
   { // Begin of loop block
	   printf("%d\t",n);
	   ++n ;
   } // End of loop block
   while(n <= 100); // loop condition
// End of the loop

   printf("\nThe control is out of the loop block");
}
