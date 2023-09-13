#include "main.h"
/**
 * print_last_digit - fucntion prints the last digit
 *
 * @n: the number
 *
 * Return: Always 0.
 */
int print_last_digit(int n);
{
	int last_digit;

	last_digit = n % 10;
	_putchar('last_digit');

	return (last_digit);
}
