#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int x;
	int y = 0;
	int z = -1;
	int k = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
			z = z * -1;
		if (s[x] >= '0' && s[x] <= '9')
		{
			y = y * 10;
			y -= (s[x] - '0');
			k = 1;
		}
		else if (k == 1)
			break;
	}
	y = z * y;
	return (z);
}
