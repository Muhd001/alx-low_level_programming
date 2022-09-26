#include <stdio.h>

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int z, P1, P2;

	P1 = 0;
	P2 = 0;

	for (z = 0; z < (size * size); z++)
	{
		if (z % (size + 1) == 0)
			P1 += a[z];
		if (z % (size - 1) == 0 && z != 0 && z < size * size - 1)
			P2 += a[z];
	}
	printf("%d, %d\n", P1, P2);
}
