#include "main.h"

/**
 *_isdigit - function to check for digit
 *@c: integer
 *Return: r 
 */

int _isdigit(int c)
{
int r = 0;

if (c >= 48 && c <= 57)
r = 1;
return (r);
}
