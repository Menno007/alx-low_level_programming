#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer head
 * @idx: the index of the list where the new node should be added
 * @n: int data
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int count = 0;

    new_node = NULL;

    if (h == NULL)
        return NULL;

    if (idx == 0)
        return (add_dnodeint(h, n));

    temp = *h;
    while (temp != NULL && count <= idx)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
        return (NULL);
    if (temp->next == NULL)
        return (add_dnodeint_end(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next; 
	temp->prev = new_node;
	temp = new_node;

    return (new_node);

}
