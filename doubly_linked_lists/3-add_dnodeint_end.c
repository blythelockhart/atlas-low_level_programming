#include "lists.h"
/**
  * add_dnodeint_end - inserts a new node at a given position.
  * @h: List head
  * @idx: List position
  * @n: New node
  * Return: Address of new element, or NULL if it failed.
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;

	while (tmp != NULL && 1 < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
