/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int temp, v, c;

	v = 0;
	c = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	*/
	while (v < c)
	{
		temp = a[v];
		a[v] = a[c];
		a[c] = temp;
		v++;
		c--;
	}
}
