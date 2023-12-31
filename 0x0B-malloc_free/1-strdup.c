#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;
	/*int i = 0;*/
	unsigned long int j;

	if (str == NULL)
		return (NULL);
	/**
	*for (i = 0; str[i] != '\0'; i++)
	*{
	*	;
	*}
	*/
	duplicate = malloc((sizeof(char) * strlen(str)) + 1);
	if (duplicate == NULL)
		return (NULL);
	for (j = 0; j < strlen(str); j++)
	{
		duplicate[j] = str[j];
	}
	duplicate[j] = '\0';

	return (duplicate);
}
