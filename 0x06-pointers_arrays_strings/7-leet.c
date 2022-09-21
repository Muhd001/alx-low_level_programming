/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int r, z = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (s[z] != '\0')
	{
		/**
		 * loop through array value five times
		 * to check if the value is equal to
		 * any small letter in array sl or
		 * upper letter in array ul and if it
		 * is replace it with the value in array n
		*/
		for (r = 0; r < 5; r++)
		{
			if (s[z] == sl[r] || s[z] == ul[r])
			{
				s[z] = n[r];
				break;
			}
		}
		z++;
	}
	return (s);
}
