/*
* Module 5, Lecture 25.
* 6 april 2020
* Alternative to if-else-if Ladder
*/

#include <stdio.h>
int main()
{
	int units_consumed ;
	float bill_amt ;

	printf("Enter the Units of electricity power consumed");
	scanf("%d",&units_consumed);

	// Each if check for either a condition or a range
	// of consumption for the calculation of the bill
	if (units_consumed>=1000)
		bill_amt=10.0 * units_consumed ;
	if (units_consumed>=800 && units_consumed<1000)
		bill_amt=8.5 * units_consumed ;
	if (units_consumed>=500 && units_consumed<800)
		bill_amt=6.5 * units_consumed ;
	if (units_consumed>=250 && units_consumed<500)
		bill_amt=4.0 * units_consumed ;
	if (units_consumed<250)
		bill_amt=2.5 * units_consumed ;

	printf("Bill Amount for electricity power consumption = %.2f",bill_amt);
}
