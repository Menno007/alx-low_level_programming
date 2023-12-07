#include "lists.h"
/**
 * dlistint_len - counts the number of elements
 * @h: pointer to head
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
