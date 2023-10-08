#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	arr = malloc((max - min + 1) * sizeof(int));

	/* If malloc fails, return NULL*/
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;
	/*
	*for (i = 0; min <= max; i++)
    *    ptr[i] = min++;
	*/
	return (arr);
}
