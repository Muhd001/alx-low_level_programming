/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int z, z2;

	z = 0;
	/*find the size of dest array*/
	while (dest[z])
		z++;

	/* iterate through each src array value without the null byte*/
	for (z2 = 0; src[z2] ; z2++)
		/*append src[z2] to dest[z] while overwritting the null byte in dest*/
		dest[z++] = src[z2];

	return (dest);
}
