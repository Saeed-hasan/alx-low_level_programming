#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{

	unsigned int X = 0;

	if  (n < 0)
	{
		X = -n;
		_putchar('-');
	}

	else
	{
		X = n;
	}

	if (X / 10)
	{
		print_number(X / 10);
	}

	_putchar((X % 10) + '0');
}

