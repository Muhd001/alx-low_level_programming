#include "main.h"

/**
 *_strncpy - copy strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{

int q = 0;

for (q = 0; src[q] != '\0'; q++)
{
if (q < n)
{
dest[q] = src[q];
}
}
for (; q < n; q++)
{
dest[q] = '\0';
}
return (dest);
}
