#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @p: Number to prints
  *
  * Return: Nothing
  */
void print_number(int p)
{
	unsigned int m;

	if (p < 0)
	{
		_putchar('-');
		p *= -1;
	}

	m = p;

	if (m / 10)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
