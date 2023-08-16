#include"main.h"
/**
 * _isalpha -  checks for lowercase letter
 * @c : charcter to check the case
 * Return:0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
