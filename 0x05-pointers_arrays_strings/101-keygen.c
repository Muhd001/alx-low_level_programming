#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
char z[100];
	int q, y, v;

	y = 0;
	v = 0;
	srand(time(NULL));
	while (y < 2645)
	{
		q = rand() % 122;
		if (q > 32)
		{
			z[v++] = q;
			y += q;
		}
	}
	z[v++] = (2772 - y);
	z[v] = '\0';
	printf("%s", z);

	return (0);
}
