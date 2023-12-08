#include "lists.h"
/**
 * get_dnodeint_at_index - frees a doubly linked list
 * @head: pointer to head
 * @index: the index of the node
 * Return: Always 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
