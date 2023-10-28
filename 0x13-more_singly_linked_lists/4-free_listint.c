#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the head of the list
 * Return: NULL if error
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	if (!head->next)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
/* listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	} */
