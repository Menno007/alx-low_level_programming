#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i = 0;
	va_list par;

	if (n == 0)
		return (0);
	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(par, int);
	}
	return (sum);
}
