/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int g, x, y;

	g = 0;
	while (s[g] != '\0')
	{
		x = 0;
		y = 1; /*flag status*/
		while (accept[x] != '\0')
		{
			if (s[g] == accept[x])
			{
				y = 0; /*success*/
				break;
			}
			x++;
		}
		if (y == 1)
			break;
		g++;
	}

	return (g);
}
