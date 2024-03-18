#include "lists.h"
/**
  * sum_dlistint - return the sum of a list.
  * @head: List head
  * Return: List sum, or 0 if NULL.
  */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
