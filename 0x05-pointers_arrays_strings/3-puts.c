#include "main.h"

/**
 * _puts - a function that takes a pointer to an int as parameter and
 * @str: chaine of caractere
 *
 * Return: 1 or 0
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
