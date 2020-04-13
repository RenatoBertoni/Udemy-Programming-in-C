/*
* Module 4, Lecture 17.
* 5 april 2020
* Using Operators: Precedence and Associativity
*/

#include <stdio.h>

int main(){
  // Variables and initial values
  int a, b, c, d;
  a = 10;
  b = 5;

  // Regular order of evaluation
  // Minus is evaluated before plus (associativity),
  // also multiplication (precedence)
  c = a - 2 + 5 * b;
  printf("c = a - 2 + 5 * b = %d\n", c);

  // Parenteses order of evaluation
  // It's the users instrument to change the regular order
  c = a - (2 + 5) * b;
  printf("c = a - (2 + 5) * b = %d\n", c);

  // Regular order of evaluation
  // Evaluation goes from left to right as they appear
  c = a % 3 * 10 / b;
  printf("c = a % 3 * 10 / b = %d\n", c);

  // Regular order of evaluation
  // Evaluation goes from left to right as they appear
  c = 100;
  printf("----------------------------------------\n", a, b, c);
  printf("For: a = %d, b = %d, c = %d\n", a, b, c);

  d = a < 20 || b > 2 && c != 100;
  // b > 2 && c != 100 is evaluated firstm and returns False
  // And, since a < 20 is True, the result will be True
  printf("d = a < 20 || b > 2 && c != 100 = %d\n", d);


}
