#include "lists.h"
/**
 * @sum_dlistint - get the sums of all data in a linked list
 * @*head - pointer to the head
 * @return 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum+= head->n;
			head = head->next;
		}
	}
	return (sum);
i
}
