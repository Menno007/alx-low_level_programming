#include "main.h"
/**
 * _puts - function
 * @str: first parameter
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
