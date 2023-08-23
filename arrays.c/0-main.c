#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char,int and float
 * 
 * Return: Always 0.
 */
int main (void)
{
	int n;

	printf("Size of type 'char' on my computer: %l bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %l bytes \n", sizeof (int));
	printf("Size of type 'float' on my computer: %l bytes \n", sizeof (float));
	printf("Size of type of variable of my variable n on my computer: %lu bytes\n", sizeof(n));
	return (0);
}
