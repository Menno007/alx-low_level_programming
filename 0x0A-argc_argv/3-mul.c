#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc > 3)
	{
		printf("Error");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}