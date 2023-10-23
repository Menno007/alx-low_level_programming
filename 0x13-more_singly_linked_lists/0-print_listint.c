#include "lists.h"
/**
 * print_listint - function print linked list
 * @h: pointer to head
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;


	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
