#include "lists.h"
/**
 * print_dlistint - prints all the elements
 * @h: pointer to head
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
