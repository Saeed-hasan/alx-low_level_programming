#include "main.h"

/**
 * binary_to_uint - convert binary number to an unsigned integer.
 * @b: binary number
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int NUM = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		NUM = NUM * 2 + (*b++ - '0');
	}
	return (NUM);
}
