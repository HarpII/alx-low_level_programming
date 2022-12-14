#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * of a dlistint_t list
 * @h: head of list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	if (!h)
	{
		return (no_of_nodes);
	}

	while (h)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}

	return (no_of_nodes);
}
