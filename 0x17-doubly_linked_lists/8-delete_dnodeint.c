#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: pointer to pointer head
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	while (index--)
	ptr = ptr->next;

	if (*head == NULL || ptr == NULL || head == NULL)
		return (-1);

	if (ptr == *head)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr->next->prev = ptr->prev;
	ptr->prev->next = ptr->next;

	free(ptr);
	return (1);

}
