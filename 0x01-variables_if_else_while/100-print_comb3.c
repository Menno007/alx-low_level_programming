#include <stdio.h>
/**
 * main - main block prints all possible different combinations of two digits.
 * Description: using putchar to print numbers.
 * Return: Always 0.
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
