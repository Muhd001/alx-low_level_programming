#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/

void print_chessboard(char (*a)[8])
{
	int u, n;

	u = 0;
	n = 0;
	while (u < 64)
	{
		if (u % 8 == 0 && u != 0)
		{
			n = u;
			_putchar('\n');
		}

		_putchar(a[u / 8][u - n]);
		u++;
	}
	_putchar('\n');
}
