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
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);
	return (0);
}
