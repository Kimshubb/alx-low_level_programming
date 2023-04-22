/**
 * @delete_node at a given index
 * @head pointer to a pointer to the head of a linked list
 * @index :index of the node to be deleted starting at 0
 * @Return 1 if successful -1 if not
 */
#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	listint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;;
		free(temp);
		return (1);
	}
	while (i <index - 1)
	{
		if temp = NULL || (temp->next) = NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
