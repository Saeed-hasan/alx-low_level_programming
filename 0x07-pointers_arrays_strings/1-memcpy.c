#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int I;

	for (I = 0; I < n; I++)
	{
		dest[I] = src[I];
	}
	return (dest);
}
