#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_dlistint(head->next);

	free(head);
}
/*
* void free_dlistint(dlistint_t *head)
*{
*	dlistint_t *temp;
*
*	while (head != NULL)
*	{
*		temp = head->next;
*		free(head);
*		head = temp;
*	}
*}
*/
