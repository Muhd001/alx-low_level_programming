#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int p = 0;

while (argc--)
{
	printf("%s\n", argv[p]);
	p++;
}

return (0);
}
