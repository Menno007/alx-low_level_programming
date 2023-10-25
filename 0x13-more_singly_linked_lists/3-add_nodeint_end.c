#include "lists.h"
/**
 * add_nodeint_end - function print linked list
 * @head: pointer to head
 * @n: f
 * Return: the number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *node_end;

	ptr = *head;
	if (head == NULL)
		return (NULL);
	node_end = malloc(sizeof(listint_t));
	if (node_end == NULL)
		return (NULL);
	node_end->n = n;
	node_end->next = NULL;
	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = node_end;
	return (node_end);
}
