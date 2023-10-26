#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

