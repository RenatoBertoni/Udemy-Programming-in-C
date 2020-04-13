/*
* Module 5, Lecture 23.
* 6 april 2020
* Alternative to nested if ... else statements
*/

#include <stdio.h>
int main()
{
	unsigned long pop1,pop2,pop3 ;
	printf("Enter the populations of 3 cities ");
	scanf("%lu%lu%lu",&pop1,&pop2,&pop3) ;

	// If does two checks in one statement
	if (pop1>pop2 && pop1>pop3)
		printf("The biggest population = %lu",pop1);
	else

	if(pop2>pop3)
		printf("The biggest population = %lu",pop2);
	else
		printf("The biggest population = %lu",pop3);
}
