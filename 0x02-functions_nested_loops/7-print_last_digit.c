#include"main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n : input number as integer
 * Return: last Digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last + 48);
	}
}
