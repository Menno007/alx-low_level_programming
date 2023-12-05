#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _create_list - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */
listint_t *_create_list(unsigned int n, ...)
{
	va_list args;
	listint_t *list;
	listint_t *tmp;
	listint_t *prev;
	unsigned int i;
	int nb;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		nb = va_arg(args, int);
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->n = nb;
		tmp->next = NULL;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *list;
	size_t n;

	list = _create_list(150, 919955);
	n = print_listint(list);
	printf("-> %lu elements\n", n);
	free_listint2(&list);
	printf("%p\n", (void *)list);
	return (0);
}
