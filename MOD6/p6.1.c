/*
* Module 6, Lecture 26.
* 7 april 2020
* Switch case statement
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
	char city_code;
	printf("Enter the city code: ");
	city_code=getchar() ;    // equivalent  to scanf("%c",&city_code);
	switch(toupper(city_code))
	{
		case 'N':
			printf("New York");
			break ; // takes the control out of the switch case block
			case 'W':
				printf("Washington DC");
				break ;
				case 'L':
					printf("London");
					break ; // out of the switch case block
					case 'A':
						printf("Amsterdam");
						break ;
						default:
							printf("Ooops !!!! This city code is invalid ...");
	}   // end of switch case block
}
