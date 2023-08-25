#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int x, xx;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (xx = 0; xx < 5; xx++)
		{
			if (s[x] == s1[xx] || s[x] == S1[xx])
			{
				s[x] = s2[xx];
				break;
			}
		}
	}
	return (s);
}
