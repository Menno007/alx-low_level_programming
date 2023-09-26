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
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				n++;
			}
		}
		else
			return (n);
	}

	return (n);
}
