#include "main.h"
/**
 * swap_int - function to swap 2 values
 * @a: first parameter
 * @b: second parameter
 * Return: 0 (Success);
 */
void swap_int(int *a, int *b)
{
	int swap1, swap2;

	swap1 = *a;
	swap2 = *b;
	*b = swap1;
	*a = swap2;
}
