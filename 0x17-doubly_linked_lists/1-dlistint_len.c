/**
 * @dlistint_len - returns the number of elements in a linked list
 * @h - pointer to the header
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return(num);
}

