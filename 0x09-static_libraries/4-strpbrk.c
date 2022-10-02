/**
 * _strpbrk - a function that searches a
 *            string for any of a set of bytes.
 *
 * @s: pointer to input string
 * @accept: pointer to string we
 *         searching for in @s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int h, d;

	h = 0;
	while (s[h] != '\0')
	{
		d = 0;
		while (accept[d] != '\0')
		{
			if (s[h] == accept[d])
				return (s + h);
			d++;
		}
		h++;
	}
	return ('\0');
}
