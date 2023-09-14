#include "main.h"
/**
 * void print_line - blablabla
 *
 * Description: blablabla
 *
 * Return: blablabla
 */
void print_line(int n)
{
	int x;
	
	if ((n == 0) || (n < 0))
		_putchar('\n');

	for (x = 0; x <= n; x++)
		_putchar(_);
	_putchar('\n');

}
