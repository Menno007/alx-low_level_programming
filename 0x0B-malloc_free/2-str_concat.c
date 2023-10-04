#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i = 0;
	unsigned long int j = 0;
	unsigned long int total_length = 0;
	char *string;

	total_length = strlen(s1) + strlen(s2);

	string = malloc((sizeof(char) * total_length) + 1);
	if (string == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		string[i] = s1[i];
	for (j = 0; j < strlen(s2); j++, i++)
		string[i] = s2[j];
	string[total_length] = '\0';
	return (string);
}
