/*
* Module 5, Lecture 22.
* 6 april 2020
* Use of nested if ... else statements
*/

#include <stdio.h>
int main()
{
	unsigned long pop1, pop2, pop3 ;

    printf("Enter the populations of 3 cities\n");
    printf("First city: ");
	scanf("%lu", &pop1) ;
    printf("Second city: ");
	scanf("%lu", &pop2) ;
    printf("Third city: ");
	scanf("%lu", &pop3) ;

    if (pop1 > pop2)
       if(pop1 > pop3)
	      printf("The biggest population = %lu", pop1);
	   else
	      printf("The biggest population = %lu", pop3);
    else

    if(pop2 > pop3)
	   printf("The biggest population = %lu", pop2);
	else
	   printf("The biggest population = %lu", pop3);
}
