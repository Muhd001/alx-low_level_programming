#include"main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int no = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		no = -no;
	}

	/*print the first few digits*/
	if ((no / 10) > 0)
		print_number(no / 10);

	/*print the last digit*/
	_putchar((no % 10) + 48);
}
