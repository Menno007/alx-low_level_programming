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
		putchar(l);

	putchar('\n');

	return (0);
}

/*
*for (int i = 97; i <= 122; i++)
*{
*    putchar(i);
*}
*putchar('\n');
*/
