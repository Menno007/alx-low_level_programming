#include "lists.h"
/**
 * list_len - counts the number of elements in a linked
 * @h: pointer to head
 * Return: the number of elements in a linked
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
