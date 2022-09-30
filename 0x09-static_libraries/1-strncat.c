#include "main.h"

/**
 *_strncat - concatenate strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
int s = 0;
int t = 0;

while (dest[t] != '\0')
{
t++;
}

for (s = 0; s < n && src[s] != '\0'; s++)

dest[s + 1] = src[t];
dest[s + t + 1] = '\0';

return (dest);
}

