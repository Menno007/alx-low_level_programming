#include "main.h"
/**
 * puts_half - function
 * @str: first parameter
 * Return: 0 (Success);
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = len / 2; i <= len ;i++)
	{
		_putchar(str[i]);
	}
}
/**
 * _strlen - function to swap 2 values
 * @s: first parameter
 * Return: 0 (Success);
 */
int _strlen(char *s)
{
	int sum = 0;

	for (; *s != '\0'; s++)
	{
		sum++;
	}

	return (sum);
}
