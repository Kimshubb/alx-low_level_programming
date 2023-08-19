/**
 * @free_dlistint - function frees memory allocacated to a list
 * @*head  - pointer to the header
 * @returns void
 */
#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
