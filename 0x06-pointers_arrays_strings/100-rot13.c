#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int l, b;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0; s[l] != '\0'; l++)
	{
		for (b = 0; a[b] != '\0'; b++)
		{
			if (s[l] == a[b])
			{
				s[l] = z[b];
				break;
			}
		}
	}
	return (s);
}
