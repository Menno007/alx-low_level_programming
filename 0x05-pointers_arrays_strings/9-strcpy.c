#include "main.h"
/**
 * _strcpy - copies the string pointed to by stc to dest
 * @dest: pointer of char to be checked
 * @src: another pointer of char to be check
 * Return: 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	if (src[i] == '\0')
		dest[i] = src[i];

	return (dest);
}
