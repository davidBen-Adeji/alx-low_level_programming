#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - funtion that returns the nth node
* @head: head node;
* @index: the nth node
* Return: the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_len = 0, i;
	listint_t *temp = head;

	while (temp != NULL)
	{
		node_len++;
		temp = temp->next;
	}

	if (index > node_len)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
