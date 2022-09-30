#include "main.h"
#include <stdio.h>
/**
 * _atoi - gets sign and numbers of string
 * @s: array
 * Return: gets numbers with its sign
 */
int _atoi(char *s)
{
	unsigned int count = 0, x, y, z, num = 0, temp;
	int w = 1;

	while (*(s + count) != '\0')
	{
		count++;
	}
	for (x = 0; x < count; x++)
	{
		if (*(s + x) >= '0' && *(s + x) <= '9')
			break;
	}
	for (y = x; y < count; y++)
	{
		if (!(*(s + y) >= '0' && *(s + y) <= '9'))
			break;
	}
	for (z = 0; z < x; z++)
	{
		if (*(s + z) == '-')
			w = w * (-1);
	}
	temp = y - x;
	while (temp >= 1)
	{
		num = (num * 10) + (*(s + x) - '0');
		x++;
		temp--;
	}
	num = num * w;
	return (num);
}
