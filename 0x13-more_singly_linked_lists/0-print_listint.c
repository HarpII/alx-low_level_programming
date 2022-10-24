#include "lists.h"

/**
 * print_listint - prints elements of
 * a list.
 * @h - head pointer of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
