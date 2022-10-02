/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int u, k;

	u = 0;

	/*find size of dest array*/
	while (dest[u])
		u++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[u + k] = src[k];
	/*null terminate dest*/
	dest[u + k] = '\0';

	return (dest);
}
