/*
* Module 3, Lecture 12.
* 4 april 2020
* Type casting.
*/

#include <stdio.h>

/*
// Example of implicit type casting
int main(){
    int a = 10;
    float b = 2.0;
    float c = b / a; // var a will be temporarilly converted into a float data type, so that float and float yield a float result
    printf("%f", c);
}
*/

/*
// Example of explicit type casting missing
int main(){
    int a = 10, b = 2;
    float c;

    c = b / a; // c will receive a velue of zero, since this is the result of the division of two int when the dividend is smaller than the divisor
    printf("%f", c);
}
*/

// Example of explicit type casting
int main(){
    int a = 10, b = 2;
    float c;

    c = (float)b / a; // a is converted into a float. This makes b temporarilly a float so that the result becomes a float.
    printf("%f", c);
}
