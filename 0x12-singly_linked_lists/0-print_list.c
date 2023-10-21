#include "lists.h"
/**
 * print_list - function return counts
 * @h: pointer to head
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
