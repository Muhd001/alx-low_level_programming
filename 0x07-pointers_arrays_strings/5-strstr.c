/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	/**
	 * we initialize a helping variable
	 * to assist in returning one of
	 * our parameters pointers haystack
	*/
	char *t, *q;

	while (*haystack != '\0')
	{
		t = haystack;
		q = needle;
		while (*q != '\0' && *haystack == *q)
		{
			haystack++;
			q++;
		}
		if (!*q)
			return (t);
		haystack++;
	}
	return ('\0');
}
