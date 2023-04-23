#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *prev = NULL;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current < prev)
			break;

		prev = current;
		current = current->next;
	}

	if (current)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		exit(98);
	}

	return (count);
}
