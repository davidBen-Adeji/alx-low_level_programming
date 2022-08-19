#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes a node
* @head: head node
* @index: index number of node to be deleted
* Return: 1 if success, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, node_len = 0;
	listint_t *temp_head = *head, *temp;

	if (head == NULL)
		return (-1);

	while (temp_head != NULL)
	{
		node_len++;
		temp_head = temp_head->next;
	}

	if (node_len == 0 || index >= node_len)
		return (-1);

	temp_head = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_head);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			temp_head = temp_head->next;

		temp = temp_head->next;
		temp_head->next = temp->next;
		free(temp);
	}

	return (1);
}
