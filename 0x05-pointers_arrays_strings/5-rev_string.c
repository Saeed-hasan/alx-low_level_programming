#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

	int len, x, HALF;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;

	x = 0;

	HALF = len / 2;

	while (HALF--)
	{
		temp = s[len - x - 1];
		s[len - x - 1] = s[x];
		s[x] = temp;
		x++;
	}

}
