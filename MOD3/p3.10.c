/*
* Module 3, Lecture 13.
* 4 april 2020
* Mean mark
*/

/*
* WAP that reads marks of a student in 3 subjects.
* Calculate the percentage of marks assuming the max.
* marks to be 300
*/

#include <stdio.h>

int main(){
    // Variables
    int meng, mmaths, mcomp;
    float p;

    // Data input
    printf("Enter the marks in 3 subjects (0 - 100)\n");
    printf("1st mark\n");
    scanf("%d",&meng);
    printf("2nd mark\n");
    scanf("%d",&mmaths);
    printf("3rd mark\n");
    scanf("%d",&mcomp);

    // Results
    // (float)mcomp brings all to float so that is can be
    // calculated and assigned to p, which expects float
    // The same result can be achieved by making one of the
    // constants a float constant, like 300.0 or 100.0
    p = (meng + mmaths + (float)mcomp) / 300 * 100;
    printf("Percentage of marks = %.2f", p);
}
