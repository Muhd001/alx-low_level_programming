/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @d : pointer to input char
 *
 * Return: @d
*/

char *string_toupper(char *d)
{
	int g = 0;

	while (d[g] != '\0')
	{
		if (d[g] >= 97 && d[g] <= 122)
			d[g] = d[g] - 32;
		g++;
	}
	return (d);
}
