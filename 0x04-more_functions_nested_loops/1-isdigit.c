#include"main.h"
/**
 * _isdigit -  checks for digits between (0 and 9)
 * @c : charcter to check the case
 * Return:0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
