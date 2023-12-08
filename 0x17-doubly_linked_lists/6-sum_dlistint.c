#include "lists.h"
/**
 * sum_dlistint - frees a doubly linked list
 * @head: pointer to head
 * Return: Always 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
