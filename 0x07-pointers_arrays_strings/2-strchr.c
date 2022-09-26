#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0' ; r++)
	{
		if (s[r] == c)
		{
			return (s + r);
		}
	}

	return ('\0');
}
