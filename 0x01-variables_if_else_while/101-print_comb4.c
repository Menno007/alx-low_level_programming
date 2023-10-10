#include <stdio.h>
/**
 * main - main block prints all possible different combinations of three digits
 * Description: using putchar to print numbers.
 * Return: Always 0.
*/
int main(void)
{
	int i;
	int j;
	int y;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (y = j + 1; y <= 57; y++)
			{
			putchar(i);
			putchar(j);
			putchar(y);
			if (i != 55)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');

	return (0);
}
