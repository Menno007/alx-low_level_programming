#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - fucntion prints the small alphabet from a to z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
