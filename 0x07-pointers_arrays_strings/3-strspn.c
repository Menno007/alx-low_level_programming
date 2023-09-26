#include "main.h"
/**
 * _strspn - Entry point
 * @s:  input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == s [j])
				return (i);
	}

	return (0);
}
