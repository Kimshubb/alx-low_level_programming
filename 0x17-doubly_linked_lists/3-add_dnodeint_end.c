/**
 * @add_dnode_int_end - function adds a new node at the end of list
 * @**head pointer to the head pointer
 * @const int n - data stored in the node
 * @return - address of new node | NULL if it fails
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL)
		return NULL;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
