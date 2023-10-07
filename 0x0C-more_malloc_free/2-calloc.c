#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @size: unsigned int
 * @nmemb: unsigned int
 * Return: If the function fails, it should return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pointer = 0;

if (nmemb == 0 || size == 0)
return (NULL);


pointer = malloc(nmemb * size);
if (pointer == NULL)
exit(0);

return (pointer);
}