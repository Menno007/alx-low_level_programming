#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 * Return: void
 */
void free_listint2(listint_t **head)
{
		if (!head || !(*head))
			return;
		if (!(*head)->next)
		{
			free(*head);
			return;
		}
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
}
/*
*void free_listint2(listint_t **head)
*{
*	listint_t *node;
*
*	while (*head != NULL)
*	{
*		node = (*head)->next;
*		free(*head);
*		*head = node;
*	}
*}
*/
