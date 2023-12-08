#include "lists.h"
/**
 * add_dnodeint - counts the number of elements
 * @head: pointer to pointer head
 * @n: data int
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
