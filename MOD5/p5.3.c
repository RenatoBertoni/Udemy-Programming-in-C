/*
* Module 5, Lecture 21.
* 6 april 2020
* Use of nested if ... else statements
*/

#include <stdio.h>
int main()
{

  int marks,scholarship;
	float an_fam_income;

  printf("Enter the marks and annual family income");
	scanf("%d%f", &marks, &an_fam_income);

  if (marks >= 80)              // outer if
	 if (an_fam_income <= 50000)  // inner if
	   scholarship = 2000 ;
	 else                       // inner else
	   scholarship = 1500 ;
	else                        // outer else
	 scholarship = 500 ;

  printf("Scholarship = %d", scholarship);
	}
