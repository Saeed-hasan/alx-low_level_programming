#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
	int I, X;

	for (I = 0; I < 8; I++)
	{
		for (X = 0; X < 8; X++)
		{
			_putchar(*(*(I + a) + X));
		}
	_putchar('\n');
	}
}
