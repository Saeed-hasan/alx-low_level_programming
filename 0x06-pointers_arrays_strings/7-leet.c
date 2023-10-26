#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int i, j;
	char lower_case_letters[] = "aeotl";
	char upper_case_letters[] = "AEOTL";
	char numbers[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower_case_letters[j] || s[i] == upper_case_letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
