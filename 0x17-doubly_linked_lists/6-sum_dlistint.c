#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n)
 * @head: pointer to head
 * Return: sum
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
