#include <stdlib.h>
#include "lists.h"

/**
* free_list - function that frees elements in a linked list
* @head: head of the list
* Return: nothing
*/
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}

	free_list(head->next);

	free(head->str);
	free(head);
}

