#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';
	return (dest);
}
