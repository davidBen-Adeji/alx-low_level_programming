#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - function that adds a node at the start of list
* @head: head of the node
* @n: number to be added
* Return: a new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
