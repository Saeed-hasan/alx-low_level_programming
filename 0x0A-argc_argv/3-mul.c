#include <stdio.h>
#include <stdlib.h>

/**
 * main-print result of 2 numbers.
 * @argc: number of command line arguments.
 * @argv: pointer to an array of command line arguments.
 *
 * Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

