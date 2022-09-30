#include "main.h"

/**
 *_memcpy - copies bytes from memory area src to memory area dest
 *@dest: destination area memory
 *@src: source memory area
 *@n: data
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int f;
f = 0;

while (f < n)
{
dest[f] = src[f];
f++;
}
return (dest);
}
