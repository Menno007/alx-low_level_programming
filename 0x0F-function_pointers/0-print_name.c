#include <stdio.h>
#include "main.h"
/**
 * print_name - sss
 * @name: s
 * @f: sss
 * Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
