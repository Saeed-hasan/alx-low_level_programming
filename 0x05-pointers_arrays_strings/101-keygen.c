#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int I, sum, N;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (I = 0; I < 100; I++)
	{
		pass[I] = rand() % 78;
		sum += (pass[I] + '0');
		putchar(pass[I] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			N = 2772 - sum - '0';
			sum += N;
			putchar(N + '0');
			break;
		}
	}

	return (0);
}
