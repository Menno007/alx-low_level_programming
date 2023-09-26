#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - print the consecutive character of s1 that are inn s2
 * @s: source string
 * @accept: seaching string
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
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
				return (s + i);
			}
		}
	}

	return (0);
}
