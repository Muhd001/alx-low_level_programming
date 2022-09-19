/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int h, i;
	char ch;

	/*find string length without null char*/
	for (h = 0; s[h] != '\0'; ++h)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < h / 2; ++i)
	{
		ch = s[i];
		s[i] = s[h - 1 - i]; /*-1 because the array starts from 0*/
		s[h - 1 - i] = ch;
	}

}
