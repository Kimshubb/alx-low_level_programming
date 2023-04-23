#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list, safely
 * @h: pointer to a pointer to the head of the list
 * implements the floyd cycle detection algorithm
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    	listint_t *current, *next;
    	size_t count = 0;

    	if (h == NULL || *h == NULL)
        	return (0);

    	current = *h;
    	while (current)
    	{
        	count++;
        	next = current->next;
        	free(current);
        	if (next >= current)
        	{
            	*h = NULL;
            	exit(98);
        	}
        	current = next;
    	}

    	*h = NULL;
    	return (count);
}

