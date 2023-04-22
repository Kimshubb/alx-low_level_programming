#include"lists.h"
/**
  * function inserts new node with a given value at a given inddex in a singly linked list
  * @head pointer to apointer to the head node of linked list
  * @return the address of the new node or null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	temp = *head;
	for (i = 0 ; temp && i < idx; i++)
	{
		if (i == idx -1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
