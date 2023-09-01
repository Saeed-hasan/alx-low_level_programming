#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{

	int dest_len, x;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[dest_len + x] = src[x];

	/*should end with a end of string char*/
	dest[dest_len + x] = '\0';

	return (dest);
}
