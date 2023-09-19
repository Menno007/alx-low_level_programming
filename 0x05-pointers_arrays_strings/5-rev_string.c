#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char swap;

	for (; s[len] != '\0';)
	{
		len++;
	}
	len--;
	for (i = len, j = 0; i >= len / 2 && j <= len / 2 ; i--, j++)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
