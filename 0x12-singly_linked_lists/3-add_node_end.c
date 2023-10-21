#include "lists.h"

/**
* add_node_end - adds a new node at the end.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address of the head.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *ptr, *ptr_end_node;

	ptr = *head;
	ptr_end_node = (struct list_s *)malloc(sizeof(list_t));
	if (ptr_end_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(ptr_end_node);
		return (NULL);
	}
	ptr_end_node->str = strdup(str);
	ptr_end_node->len = strlen(str);
	ptr_end_node->next = NULL;
	if (*head == NULL)
		*head = ptr_end_node;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = ptr_end_node;
	}
	return (ptr_end_node);
}
