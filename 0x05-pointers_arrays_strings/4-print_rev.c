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
	len--;
	for (; len >= 0; len--, s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
