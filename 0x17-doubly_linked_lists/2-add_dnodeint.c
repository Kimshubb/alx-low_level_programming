/**
 * @addnodeint -add new node a beginning of the list
 * @head pointer- to the pointer to the first node in the list
 * @const int n - data in the node is an integer n 
 * @ return - new node of (dlistint_t *) type
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
