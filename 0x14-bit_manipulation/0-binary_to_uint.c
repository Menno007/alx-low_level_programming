#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: string of binary
 * Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i, n;

	if (!b)
		return (0);
	n = strlen(b);
	for (i = 0; i < n; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		/* Multiply 2^i by b[i] and add it to the result */
		result += ((1 << (n - i - 1)) * (b[i] - '0'));
	}
	return (result);
}
/*
 *unsigned int binary_to_uint(const char *b)
 *{
 *	unsigned int result = 0;
 *	unsigned int i, n;
 *
 *	if (!b)
 *		return (0);
 *	n = strlen(b);
 *	for (i = 0; i < n; i++)
 *	{
 *		if ((b[i] != '0') && (b[i] != '1'))
 *			return (0);
 *
 *		--> Multiply 2^i by b[i] and add it to the result <--
 *
 *		printf("b[%d]=%c\n\n", i, b[i]);
 *		printf("n(len)=%d\n", n);
 *		printf("result before = %d\n", result);
 *		printf("(n - i - 1)) = %d\n", (n - i - 1));
 *		printf("(1 << (n - i - 1)) = %d\n", (1 << (n - i - 1)));
 *		result += ((1 << (n - i - 1)) * (b[i] - '0'));
 *		printf("result after = %d\n\n", result);
 *	}
 *	return (result);
 *}
 */
