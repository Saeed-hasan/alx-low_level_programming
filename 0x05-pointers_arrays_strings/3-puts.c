#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
	int I = 0;

	while (str[I])
	{
		_putchar(str[I]);
		I++;
	}

	_putchar('\n');
}
