#include"main.h"
/**
 * print_numbers - prints numbers
 * Return:0
 */
void print_numbers(void)
{
	int num = 0;

	for (num = 0 ; num <= 9 ; num++)
	{
		_putchar(num + 48);
	}
	_putchar('\n');
}
