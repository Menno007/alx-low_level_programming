#include <stddef.h>
#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{

		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
