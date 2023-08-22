#include "main.h"
/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
	int len, x, y;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (y = len / 2; str[y] != '\0'; y++)
		{
			_putchar(str[x]);
		}
	} else if (len % 2)
	{
		for (x = (len - 1) / 2; n < len - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar('\n');
}
