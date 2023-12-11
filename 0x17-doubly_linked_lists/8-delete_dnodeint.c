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

	if (*head == NULL)
		return (-1);

	while (index--)
		ptr = ptr->next;

	if (ptr == *head) /*idx == 0*/
	{
		*head = (*head)->next; /* move head pointer to next node */
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	ptr->prev->next = ptr->next;

	free(ptr);
	return (1);

}
