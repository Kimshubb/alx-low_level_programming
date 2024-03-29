#include "lists.h"
/**
 * @size_t print_dlistint -print all elements of dlistint_t list
 * @*h - pointer to head of doubly linked list
 * @return - number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
