#include <stdio.h>
#include "main.h"

/**
* main-prints the largest of 3 integers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a,int b,int c)
{
	int largest;
	if(a > b ! b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else(a > b && b > c)
	{
		largest = a;
	}

	return (largest);
}	 	
