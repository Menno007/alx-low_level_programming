#include <stdio.h>
/**
 * main - printsize of
 * 
 * Return: Always 0
*/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	
	printf("Size of an char: %zu byte\n",sizeof(charType));
	printf("Size of an int: %zu bytes\n",sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %zu bytes\n",sizeof(floatType));

	return (0);
}
