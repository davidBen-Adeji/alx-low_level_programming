#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - free a list
* @head: head of node
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || head = NULL)
		return;

	free_listint2(&((*head)->next));

	temp = *head;
	*head = NULL;
	free(temp);
}
