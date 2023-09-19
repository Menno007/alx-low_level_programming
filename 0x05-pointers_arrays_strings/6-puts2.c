#include "main.h"
/**
 * puts2 - function
 * @str: first parameter
 * Return: 0 (Success);
 */
void puts2(char *str)
{
	int len = 0;

	for (; str[len] != '\0' ; len = len + 2 /* len +=2 */)
	{
		if (str[len + 1] == '\0')
		{	
			break;
		}
		_putchar(str[len]);
	}
	_putchar('\n');
}
