#include "main.h"

/**
 * _strncpy - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0, j = 0; dest[i] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
