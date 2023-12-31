#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
listint_t *tem = head;

while (tem && n < index)
{
tem = tem->next;
n++;
}

return (tem ? tem : NULL);
}
