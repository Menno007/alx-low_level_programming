#include "main.h"
#include <stddef.h>
/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in hystack
 * Return: return 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
                		{
                        		break;
                		}	
			}
			if (needle[j] != '\0')
				i++;
			else
				return (haystack + i);
		}
	}

	return (NULL);
}
