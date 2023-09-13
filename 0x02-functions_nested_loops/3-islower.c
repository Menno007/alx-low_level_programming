#include "main.h"
/**
 *_islower- function compare lower
 *@c: is character checker
 *Return: Always 0.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	return (0);

}
