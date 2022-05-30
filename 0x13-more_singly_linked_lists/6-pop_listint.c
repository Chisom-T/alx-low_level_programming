#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list head
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (node);
}
