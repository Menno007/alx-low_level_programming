#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	if (size == 0)
		return (NULL);
	string = malloc(size * sizeof(char));
	if (string == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}

	return (string);
}
