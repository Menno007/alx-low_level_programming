#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the head of the list
 * Return: NULL if error
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
