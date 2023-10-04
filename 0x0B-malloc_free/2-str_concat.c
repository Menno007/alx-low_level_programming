#include "main.h"
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	if (s1[i] == '\0')
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			s1[i] = s2[j];
		}
		s1[i] = '\0';
	}
	return (s1);
}
