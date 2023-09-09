#include <stdio.h>
/*
 * main - print numbers
 *
 * Return: Always 0.
 * */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

        return (0);
}
