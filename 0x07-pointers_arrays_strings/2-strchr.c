#include "main.h"

/**
 * _strchr - prints found c
 * @s: string that we search in
 * @c: char we looking for
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0'&& *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
