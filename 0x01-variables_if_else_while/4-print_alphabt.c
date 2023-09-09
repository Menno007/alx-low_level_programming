#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase
 *
 * Return: Always 0
 **/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	if (l != 'q' && l != 'e')
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
