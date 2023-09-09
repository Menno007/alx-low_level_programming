#include <stdio.h>
/*
 * main - main block print numbers
 * Describtion: using putchar to print numbers
 * Return: Always 0.
*/
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
