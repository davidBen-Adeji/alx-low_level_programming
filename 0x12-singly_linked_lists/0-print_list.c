#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - function to print elements of a list_t list
* @h: struct list_t
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node_len = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);

		node_len = node_len + 1;
		temp = temp->next;
	}

	return (node_len);
}
