#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of a list.
  * @head: List head
  * @index: N.
  * Return: Nth element, or NULL.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		count++;
		head = head->next;
	}

	if (head == NULL || count < index)
		return (NULL);

	return (head);
}
