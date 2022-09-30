#include "main.h"

/**
 *_strlen - count the length of a string
 *@s: string
 *
 *Return: the value of the length k
 */

int _strlen(char *s)
{
int k = 0;

while (s[k])
k++;

return (k);
}
