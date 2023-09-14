#include "main.h"
/**
 * jack_bauer - his fucntion prints the alphabet from a to z
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int x, y;

	for(x = 00; x <= 23; x++)
	{
		for(y = 00; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		
		}
	}
}
