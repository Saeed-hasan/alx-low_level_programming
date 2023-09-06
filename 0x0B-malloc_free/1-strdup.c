#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *m = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (0);
	}

	m = malloc(strlen(str) + 1);

	if (m == NULL)
	{
		return (0);
	}

	strcpy(m, str);

	return (m);
}
