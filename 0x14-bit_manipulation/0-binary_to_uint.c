#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: string of binary
 * Return: he converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i, n = strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < n; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		/* Multiply 2^i by s[i] and add it to the result */
		ans += (1 << (n - i - 1)) * (b[i] - '0');
	}
	return (ans);
}
