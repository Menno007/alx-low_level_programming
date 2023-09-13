#include "main.h"
/**
 * _abs - writes the the absolute value of an integer.
 * @n: The number
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
