#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *string;
    unsigned long int i = 0;
	unsigned long int j = 0;
    unsigned long int x = strlen(s1);

    if (s1 == NULL)
    {
    s1 = "";
    }
    if (s2 == NULL)
    {
    s2 = "";
    }
    string = malloc(sizeof(char) * (strlen(s1) + n));
    if (string == NULL)
    {
    return (NULL);
    }
    for (i = 0; i < strlen(s1); i++)
		string[i] = s1[i];
	for (j = 0; j <= (n + strlen(s1)); j++, i++)
		string[i] = s2[j];
	string[x + n] = '\0';
	return (string);

}
