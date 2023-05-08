#include "lists.h"
/**
 * @get_node_at_index -gets the node at nth index
 * @index index of the node starting from 0
 * @return node | NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (*head == NULL)
		return NULL;
	while (head != NULL && i <index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
