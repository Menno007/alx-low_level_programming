#include "main.h"
/**
 * _puts - function
 * @str: first parameter
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
