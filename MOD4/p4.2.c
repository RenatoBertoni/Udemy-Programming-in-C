/*
* Module 4, Lecture 15.
* 5 april 2020
* Using Operators: increment / decrement
*/

#include <stdio.h>

int main(){
  // For an a of int type, sizeof(a) = sizeof(int)
  int y, a;

  // Increment ------------------------------------
  // Prefix
  y = 10;
  a = 10;
  y = ++a;
  printf("Values for ++a: a = %d \tand\t y = %d\n", a, y);

  // Postfix
  y = 10;
  a = 10;
  y = a++;
  printf("Values for a++: a = %d \tand\t y = %d\n", a, y);

  // Decrement ------------------------------------
  // Prefix
  y = 10;
  a = 10;
  y = --a;
  printf("Values for --a: a = %d \tand\t y = %d\n", a, y);

  // Postfix
  y = 10;
  a = 10;
  y = a--;
  printf("Values for a--: a = %d \tand\t y = %d\n", a, y);

}
