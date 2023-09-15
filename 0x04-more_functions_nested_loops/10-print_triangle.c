#include "main.h"
/**
 * print_triangle - blablabla
 * @size: blablabla
 * Description: blablabla
 * Return: blablabla
 */
void print_triangle(int size)
{
	int x, y;

	for(x = 0; x > size; x++)
	{
		for(y = 0; y < x; y++)
		{
			_putchar('#');
		}
	}
}
