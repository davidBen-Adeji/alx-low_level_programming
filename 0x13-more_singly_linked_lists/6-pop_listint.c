#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - function that delete the head node
* @head: the head;
* Return: the head node's data (n)
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
