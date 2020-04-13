/*
* Module 5, Lecture 20.
* 6 april 2020
* Use of if ... else statements
*/

#include <stdio.h>
int main()
{
  // Declaration of variables
  int bsal ;
  float hra,pf,bonus,netsalary ;

  // Data input
  printf("Enter the basic salary: ");
  scanf("%d",&bsal);

  // Condition testing
  if(bsal >= 10000)
  {
  	hra = 5.5 / 100 * bsal ;
  	pf = 30.0 / 100 * bsal ;
  	bonus = 75.0 / 100 * bsal ;
  }
  else
  {
  	hra = 2.5 / 100 * bsal ;
  	pf = 20.0 / 100 * bsal ;
  	bonus = 35.0 / 100 * bsal ;
  }

  // Main calculation
  netsalary = bsal + hra + bonus - pf ;

  // Data output
  printf("Net Salary = %.2f", netsalary);
 }
