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
unsigned long int len1, len2, total_len;

len1 = strlen(s1);
len2 = strlen(s2);

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n >= strlen(s2))
{
total_len = len1 + len2;
}
else
{
total_len = len1 + n;
len2 = n;
}
string = malloc(sizeof(char) * (total_len + 1));
if (string == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
string[i] = s1[i];
for (j = 0; j < len2 && j < n; j++, i++)
{
string[i] = s2[j];
}
string[total_len] = '\0';
return (string);
}
