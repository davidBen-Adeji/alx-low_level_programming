#include <stdlib.h>
#include "lists.h"

/**
* list_len - function that returns the number of nodes
* @h: struct list_t
* Return: number pf nodes
*/

size_t list_len(const list_t *h)
{
	size_t node_len = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		node_len = node_len + 1;
		temp = temp->next;
	}

	return (node_len);
}
