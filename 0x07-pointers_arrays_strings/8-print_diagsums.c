#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints og two diagonal of a square
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[(size * i) + i];
		sum2 = sum2 + a[(size * i) + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
