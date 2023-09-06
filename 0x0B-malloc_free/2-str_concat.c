#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	m = malloc(strlen(s1));
	m = malloc(strlen(s2) + 1);

	if (m == NULL)
	{
		return (0);
	}
	strcat(s1, s2);
	return (m);
}
