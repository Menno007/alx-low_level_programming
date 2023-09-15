#include "main.h"
/**
 * print_triangle - blablabla
 * @size: blablabla
 * Description: blablabla
 * Return: blablabla
 */
void print_triangle(int size)
{
	int x, y, i;
	
	if (size <= 0)
	{
		putchar('\n');

		return;
	}
	for (x = 0; x < size; x++)
	{
		for (i = size - 1; i > x; i--)
		{
			putchar(' ');
		}
		for (y = 0; y <= x; y++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
