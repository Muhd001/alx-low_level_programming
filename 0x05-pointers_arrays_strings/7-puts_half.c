#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int a, f;

	for (a = 0; str[a] != '\0'; ++a)
		;

	if (a % 2 == 0)
	{
		for (f = a / 2; str[f] != '\0'; ++f)
			_putchar(str[f]);
	} else
	{
		for (f = ((a - 1) / 2) + 1; str[f] != '\0'; ++f)
			_putchar(str[f]);
	}
	_putchar('\n');
}
