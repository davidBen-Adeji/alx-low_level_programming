#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - function to find the length of string
* @str: string to find the legth of
* Return: length of the string
*/
unsigned int _strlen(char *str)
{
	unsigned int len = 0;
	const char *temp = str;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	return (len);
}

/**
* add_node_end - function to add a node at the end of a list
* @head: the first node
* @str: string to be duplicated
* Return: adress of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *temp_head = *head;

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp->str);
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(temp->str);

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
