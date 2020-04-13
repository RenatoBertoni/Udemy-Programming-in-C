/*
* Module 4, Lecture 15.
* 5 april 2020
* Using Operators: Conditional
*/

#include <stdio.h>

int main(){
  // Variables and initial values
  int a, b, c, d, e;
  a = 20;
  b = 10;
  c = 500;
  d = 1000;
  printf("Initial values are:\ta=%d\tb=%d\tc=%d\td=%d\n", a, b, c, d);

  // For True condition
  e = (a > b ? c : d);
  printf("For e = (a > b \? c \: d) condition,\te=%d\n", e);

  // For False condition
  e = (a < b ? c : d);
  printf("For e = (a < b \? c \: d) condition,\te=%d\n", e);
}
