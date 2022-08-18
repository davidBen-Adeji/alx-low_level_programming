#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - sum all the data (n) of a list
* @head: head node
* Return: sum of data (n)
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
