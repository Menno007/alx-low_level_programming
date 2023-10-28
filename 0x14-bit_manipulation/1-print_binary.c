#include "main.h"
/**
 * print_binary - print binary of decimal binary
 * @n: input
 * Return: void
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}
