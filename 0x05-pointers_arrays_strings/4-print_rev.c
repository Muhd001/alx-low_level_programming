#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int d;

	/*finds the length of string without null character*/
	for (d = 0; s[d] != '\0'; ++d)
		;

	/*print char from the last index as you decrement*/
	for (--d; d >= 0; --d)
		_putchar(s[d]);
	_putchar('\n');
}
