#include "main.h"
/**
 * print_alphabet - function prints alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 10;n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		 _putchar('\n');
	}
	_putchar('\n');
}
