#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a = 612852475143;
	long int zz;

	for (zz = 2; zz < a; zz++)
	{
		if (a % zz == 0)
		{
			a = a / zz;
		}
	}
	printf("%ld\n", zz);
	return (0);
}
