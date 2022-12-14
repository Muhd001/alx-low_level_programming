#include <stdlib.h>
#include "main.h"

/**
 * Tasku_0: create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to fill array with
 * Return: string of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int z;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (!size || !ptr)
		return (NULL);
	for (z = 0; z < size; z++)
		ptr[z] = c;
	return (ptr);
}
