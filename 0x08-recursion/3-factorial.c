#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int factor = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}	
	else
	{
		factor = n * factorial(n - 1);
	}
	return (factor);
}
