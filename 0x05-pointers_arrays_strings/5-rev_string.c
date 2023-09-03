#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	int i;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
