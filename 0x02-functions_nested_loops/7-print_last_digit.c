#include "main.h"
/**
 * print_last_digit - fucntion prints the last digit
 *
 * @n: the number
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = ((n % 10) * (-1));

	else
		last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
