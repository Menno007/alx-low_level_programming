#include "main.h"
/**
 * _puts_recursion - print a string
 * @s:string
 * Return:void
 */
void _puts_recursion(char *s)
{
	_puchar(*s);
	_puts_recursion(s+1);
}
