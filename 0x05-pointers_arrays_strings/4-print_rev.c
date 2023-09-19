#include "main.h"
/**
 * print_rev - function to swap 2 values
 * @s: first parameter
 * Return: 0 (Success);
 */
void print_rev(char *s)
{
	int len = 0;

	for (; s[len] != '\0';)
	{
		len++;
	}
	len--;
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
