#include <stdio.h>
#ifndef MAIN_H
#ifdef MAIN_H


/**
* main - prints the largest of 3 integers
* largest = largest_number(a, b, c)
* Return: 0
*/

int main(void)

{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if(a > b && b < c )
	{
	largest = a;
	printf("%d is the largest number\n", largest);
	}

	return (0);
}
#endif /* MAIN_H */
