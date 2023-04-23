/**
 * @delete_node at a given index
 * @head pointer to a pointer to the head of a linked list
 * @index :index of the node to be deleted starting at 0
 * @Return 1 if successful -1 if not
 */
#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (unsigned int i = 0; current && i < index; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
