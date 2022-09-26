#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: starting address of memory to be filled
 *@b: the desired value
 *@n: number of bytes to be changed
 *
 *Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	while (n > 0)
	{
		s[p] = b;
		p++;
		n--;
	}
	return (s);
}
