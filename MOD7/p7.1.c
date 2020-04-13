/*
* Module 7, Lecture 29.
* 12 april 2020
* Iteration: While loop
*/
/*  WAP to print all natural numbers from 1 to 100 using while loop*/

#include <stdio.h>

int main()
{
	int n = 1; // iteration variable declared and initialized
	// The initial value of the iteration variable will
	// determined if the loop block is exectuted even once
// Begin of loop
	while( n <= 100) // Loop condition
	{ // Begin of loop block
		printf("%d\t",n);
		++n ; // iteration variable
	} // End of loop block
// End of loop

		printf("\nThe control is out of the loop block");
}
