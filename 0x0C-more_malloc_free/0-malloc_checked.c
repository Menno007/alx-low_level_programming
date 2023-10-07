#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = malloc(b);
if (pointer == NULL)
    exit (98);
return (pointer);
}
