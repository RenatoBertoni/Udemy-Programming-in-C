/*
* Module 7, Lecture 33.
* 12 april 2020
* Iteration: For loop part 3
*/

/*  A sample program to illustrate the use of multiple statements in
all the 3 components of a for loop  */

#include <stdio.h>
int main()
{
	int a ,b ;

    // For loop with two variables
    for (a=100 ,b=1 ; a >= 50 && b <= 5 ; a-=2 , ++b)
	   printf("a = %d\tb = %d\n", a, b);
}
