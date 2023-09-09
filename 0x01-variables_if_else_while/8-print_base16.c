#include <stdio.h>

/**
 * main - main block
 * Description: Print all the numbers of base 16 in lowercase.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');

	return (0);
}
