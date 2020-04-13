/*
* Module 4, Lecture 15.
* 5 april 2020
* Using Operators: sizeof
*/

#include <stdio.h>

int main(){
  // For an a of int type, sizeof(a) = sizeof(int)
  printf("Size of int is: \t\t%d\n", sizeof(int));
  printf("Size of double is: \t\t%d\n", sizeof(double));
  printf("Size of float is: \t\t%d\n", sizeof(float));
  printf("Size of char is: \t\t%d\n", sizeof(char));
  printf("Size of long double is: \t%d\n", sizeof(long double));
}
