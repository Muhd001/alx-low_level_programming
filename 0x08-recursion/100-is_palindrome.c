#include "main.h"

/**
 * palind2 - obtains length of a
 * @z: string
 * @v: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *z, int v)
{
	if (*z == 0)
		return (v - 1);
	return (palind2(z + 1, v + 1));
}
/**
 * palind3 - compares string vs string reverse
 * @r: string
 * @t: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind3(char *r, int t)
{
	if (*r != *(r + t))
		return (0);
	else if (*r == 0)
		return (1);
	return (palind3(r + 1, t - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int x;

	x = palind2(s, 0);
	return (palind3(s, x));
}
