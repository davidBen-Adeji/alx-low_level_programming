#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - function that adds node at end of a list
* @head: head of the list
* @n: number to be added
* Return: the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_head = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		while (temp_head->next != NULL)
			temp_head = temp_head->next;

		temp->next = NULL;
		temp_head->next = temp;
	}

	return (temp);
}
