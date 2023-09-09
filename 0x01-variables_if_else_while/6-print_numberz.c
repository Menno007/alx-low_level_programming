#include <stdio.h>
/**
 * main - print numbers with asci
 *
 * Return: Always 0.
*/
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
