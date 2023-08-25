#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: pointer
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int flag, x, xx;

	for (x = 0; str[x] != '\0'; x++)
	{
		flag = 0;

		if (x == 0)
		{
			flag = 1;
		}
		else
		{
			for (xx = 0; sep[xx] != '\0'; xx++)
			{
				if (str[x - 1] == sep[xx])
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1)
		{
			if (str[x] <= 'z' && str[x] >= 'a')
			{
				str[x] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
