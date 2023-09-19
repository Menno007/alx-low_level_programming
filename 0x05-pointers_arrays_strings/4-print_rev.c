#include "main.h"
/**
 * print_rev - function to swap 2 values
 * @s: first parameter
 * Return: 0 (Success);
 */
void print_rev(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	for (; len > 1; len--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
