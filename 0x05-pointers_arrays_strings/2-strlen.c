#include "main.h"
/**
 * swap_int - function to swap 2 values
 * @s: first parameter
 * Return: 0 (Success);
 */
int _strlen(char *s)
{
	int sum = 0;

	for(; *s != '\0'; s++)
	{
		sum++;
	}

	return (sum);
}
