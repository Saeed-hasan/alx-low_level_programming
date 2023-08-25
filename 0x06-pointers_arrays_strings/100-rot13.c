#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int x, xx;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (xx = 0; xx < 54; xx++)
		{
			if (((s[x] <= 'z' && s[x] >= 'a') || (s[x] <= 'Z' && s[x] >= 'A'))
			&& s[x] == input[xx])
			{
				s[x] = output[xx];
				break;
			}
		}
	}
	return (s);
}
