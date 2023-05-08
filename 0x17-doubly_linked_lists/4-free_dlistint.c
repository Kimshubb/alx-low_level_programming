/**
 * @free_dlistint - function frees memory allocacated to a list
 * @*head  - pointer to the header
 * @returns void
 */
#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(head);
	}
}
