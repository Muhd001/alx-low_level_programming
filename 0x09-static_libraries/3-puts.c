#include "main.h"

/**
 *_puts - prints a string
 *@str: string
 *
 *Return : nothing
 */

void _puts(char *str)
{
int v = 0;

while (str[v] != '\0')
{
_putchar(str[v]);
v++;
}
_putchar('\n');
}
