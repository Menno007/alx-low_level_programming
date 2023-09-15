#include "main.h"
/**
 * print_diagonal - blablabla
 * @n: blabla
 * Description: blablabla
 * Return: blablabla
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
		putchar('\n');
}
