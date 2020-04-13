/*
* Module 4, Lecture 16.
* 5 april 2020
* Using Operators: Compound Assigment
*/

#include <stdio.h>

int main(){
  // Variables and initial values
  int a;
  a = 10;

  printf("Initial value: \t\ta = %d\n", a);
  printf("For \ta += 10, \ta = %d\n", a += 10);
  printf("For \ta -= 5, \ta = %d\n", a -= 5);
  printf("For \ta *= 7, \ta = %d\n", a *= 7);
  printf("For \ta /= 2, \ta = %d\n", a /= 2);
  printf("For \ta %%= 3, \ta = %d\n", a %= 3);

}
