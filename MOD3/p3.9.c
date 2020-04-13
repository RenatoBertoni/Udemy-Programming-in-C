/*
* Module 3, Lecture 13.
* 4 april 2020
* Interest value
*/


/* WAP (Write A Program) that reads principal amount, rate of interest and time.
Calculate simple interest */

#include <stdio.h>
int main(){
  // Declaration of the variables
  float pmt,roi,sint;
  int tm;

  // Gethering of the data
  printf("Enter: \n");
  printf("Principal amount (in Dollars): ");
  scanf("%f", &pmt);
  printf("Period of time : ");
  scanf("%d", &tm);
  printf("Rate of interest (per each time unit in %%): ");
  scanf("%f", &roi);

  // Calculation of the Simple Interest
  // roi/100 is due to a decimal interest rate in the
  // formula, so one can input it as regular %
  sint = (pmt * tm * (roi/100));
  printf("Simple Interest (in Dollars)= %.2f\n", sint);
  return 0;
}
