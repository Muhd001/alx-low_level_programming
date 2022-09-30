#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copy string including the terminating null byte
 *@dest: destination of string
 *@src: source of string
 *
 *Return: the value dest
 */

char *_strcpy(char *dest, char *src)
{
int d = 0;

for (d = 0; src[d]; d++)
dest[d] = src[d];
dest[d] = src[d];
return (dest);
}
