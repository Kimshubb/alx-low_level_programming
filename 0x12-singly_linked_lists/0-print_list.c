#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/** print_list prints all the elements of a list
  * @h pointer to the list_h to print
  * return the numbere of nodes printed
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++
		}
	}
	return count;
}


