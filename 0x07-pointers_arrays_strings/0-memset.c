#include "main.h"

/**
 * _memset - ironnou
 * @s: memory area
 * @b: constant
 * @n: size of array
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
