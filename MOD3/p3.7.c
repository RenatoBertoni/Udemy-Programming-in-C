/*
* Module 3, Lecture 11.
* 4 april 2020
* Formatting output
* Ammount of precision for floats.
*/

#include <stdio.h>
int main()
{
float a=90.0 ;
//printf("%f\n",a);   //by default the decimal precision is 6
//printf("%.2f\n",a); // now decimal precision will be 2

//printf("%.4f\n",a); // now decimal precision will be 4
//printf("%.0f\n",a); // now decimal precision will be 0
printf("%20.2f\n",a);//width on left of decimal is 10 and decimal precision is 2
printf("%-20.2f",a); // same as above but left aligned

}
