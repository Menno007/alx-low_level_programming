#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to pointer head
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return (NULL);

	if (head->next != NULL)
		free_dlistint(head->next);

	free(head);

}
