#include "main.h"

/**
 *_strspn - get the length of a prefix substring
 *@s: string
 *@accept: string
 *
 *Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int f, g;

for (f = 0; s[f]; f++)
{
for (g = 0; accept[g]; g++)
{
if (s[f] == accept[g])
break;
}
if (s[f] != accept[g])
break;
}
return (f);
}
