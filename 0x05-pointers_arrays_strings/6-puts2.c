#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			putchar(str[x]);
		}

		x++;
	}
	putchar('\n');
}
