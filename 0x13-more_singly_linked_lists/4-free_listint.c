#include <stdlib.h>
#include "lists.h"

/**
* free_listint - function to free a list
* @head: head of the list
* Return: Nothing
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);

	free(head);
}
