#include <stdlib.h>
#include "lists.h"

/**
* listint_len - function that returns number of nodes
* @h: the head of the node
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		node_len++;
		h = h->next;
	}

	return (node_len);
}
