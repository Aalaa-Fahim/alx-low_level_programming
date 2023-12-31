#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list
 * @h: pointer to the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		no++;
	}

	return (no);
}
