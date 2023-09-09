#include <stdio.h>

/**
 * main - main block
 * Description: Print all the numbers of base 16 in lowercase.
 * Return: 0
 */

int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
		putchar (y);
	putchar('\n');

	return (0);
}
