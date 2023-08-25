#include "main.h"
/**
 * reverse_array - reverse a int array
 * @a: pointer
 * @n: array length
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int x = 0, half;

	for (half = n / 2; half > 0; half--, x++)
	{
		a[n - x - 1] += a[x];
		a[x] = a[n - x - 1] - a[x];
		a[n - x - 1] = a[n - x - 1] - a[x];
	}
}
