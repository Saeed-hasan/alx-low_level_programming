#include"main.h"
/**
 * _islower -  checks for lowercase letter
 * @c : charcter to check the case
 * Return:0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
else
	{
		return (0);
	}
	_putchar('\n');
}
