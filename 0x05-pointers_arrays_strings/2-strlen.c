#include "main.h"
/**
 * swap_int - function to swap 2 values
 * @a: first parameter
 * @b: second parameter
 * Return: 0 (Success);
 */
int _strlen(char *s)
{
	int sum = 1;

	for(; *s != '\0'; s++)
	{
		sum++;
	}

	return (sum);
}
