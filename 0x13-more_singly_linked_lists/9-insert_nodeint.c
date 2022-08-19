#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node
* @head: head of the node
* @idx: index of new node
* @n: data to be addedi
* Return: the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_len = 0, i;
	listint_t *temp_head = *head, *temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (temp == NULL)
		return (NULL);

	while (temp_head != NULL)
	{
		node_len++;
		temp_head = temp_head->next;
	}

	if (idx > node_len)
		return (NULL);
	temp_head = *head;
	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
			temp_head = temp_head->next;
		temp->next = temp_head->next;
		temp_head->next = temp;
	}
	return (temp);
}

