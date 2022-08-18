#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - function that prints elements of a list
* @h: head of the list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_len = node_len + 1;
		h = h->next;
	}

	return (node_len);
}
