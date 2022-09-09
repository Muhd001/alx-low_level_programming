#include <stdio.h>

/**
 * main - Print the alphabet in lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char g;

	for (g = 'z'; g >= 'g'; g--)
		putchar(g);
	putchar('\n');

	return (0);
}
