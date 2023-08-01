#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the int data in a singly linked list.
 * @h: the head pointer to the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
