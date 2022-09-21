#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: char
 * @size: int
 * Return:void
 */
void print_buffer(char *b, int size)
{
	int t, y;

	for (t = 0; t < size; t += 10)
	{
		printf("%08x: ", t);

		for (y = 0; y < 10; y++)
		{
			if ((y + t) >= size)
				printf("  ");

			else
				printf("%02x", *(b + y + t));

			if ((y % 2) != 0 && y != 0)
				printf(" ");
		}

		for (y = 0; y < 10; y++)
		{
			if ((y + t) >= size)
				break;

			else if (*(b + y + t) >= 31 &&
				 *(b + y + t) <= 126)
				printf("%c", *(b + y + t));

			else
				printf(".");
		}

		if (t >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
