#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the index of a list.
 * @head: Head of list
 * @index: Index of node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);

		return (1);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	tmp = current->prev;
	tmp->next = current->next;

	if (current->next != NULL)
		current->next->prev = tmp;
	free(current);

	return (1);
}
