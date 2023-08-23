#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int I = 0;

	while (s[I] != '\0')
	{
		I++;
	}
	I--;
	while (I >= 0)
	{
		_putchar(s[I]);
		I--;
	}
	_putchar('\n');
}
