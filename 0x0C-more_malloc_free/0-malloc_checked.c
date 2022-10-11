#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memoy using malloc
*
* @b: amount 0f bytes
*
* Return: pointer to our new allocated memory exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
