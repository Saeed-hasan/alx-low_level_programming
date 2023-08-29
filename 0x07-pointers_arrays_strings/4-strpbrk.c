#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int I;

	while (*s)
	{
		for (I = 0; accept[I]; I++)
		{
			if (*s == accept[I])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
