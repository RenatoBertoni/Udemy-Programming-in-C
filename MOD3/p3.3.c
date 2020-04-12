/*
* Module 3, Lecture 8.
* 4 april 2020
* Formatted input/output
*/

#include <stdio.h>
int main(){
    int a,b;    //decl. of variables a dn b
    float c;    //decl. of variable c
    printf("Enter the values of a and b\n");
    scanf("%d%d", &a, &b); //reading the values from user
    c = a + b;
    printf("%f\n",c);
    c = a - b;
    printf("%f\n", c);
}
