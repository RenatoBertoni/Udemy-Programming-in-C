/*
* Module 5, Lecture 20.
* 6 april 2020
* Use of if statements
*/

#include <stdio.h>

int main(){

  // Declaration of variables
  int marks;
  float scholarship = 0.0;

  // Input of data
  printf("Enter the marks: ");
  scanf("%d", &marks);

  // Condition testing
  // If it turns out True, scholarship becomes 1000,
  // else (False) scholarship becomes 1000
  if (marks >= 90)
    scholarship = 1000;
  else
    scholarship = 500;

  // Output of the results
  printf("Scolarship: %.2f\n", scholarship);

}
