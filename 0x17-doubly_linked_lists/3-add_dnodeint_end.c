#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: pointer to pointer head
 * @n: data int
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *End_node, *temp;

	if (head == NULL)
		return (NULL);

	End_node = malloc(sizeof(dlistint_t));
	if (End_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		End_node->prev = NULL;
		*head = End_node;
		End_node->n = n;
		End_node->next = NULL;
		return (End_node);
	}
	End_node->n = n;
	End_node->next = NULL;

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = End_node;
	End_node->prev = temp;

	return (End_node);
}
