#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - function that reverses a linked list
* @head: head of the list
* Return: pointer to the first node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
