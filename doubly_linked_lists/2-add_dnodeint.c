#include "lists.h"
/**
  * dlistint_len - adds a new node at the beginning of a list.
  * @head: List head
  * @n: add to the list
  * Return: Address of new element, or NULL if it failed.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
