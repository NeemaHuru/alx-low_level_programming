#include <stdio.h>

/**
 * mian - printing the size,in bytes, of a pointer
 *
 * Return: A lways 0.
 */
int main (void)
{
	int *p;

	printf("Size of pointer: %lu\n",sizeof(p));
	return (0);
}
