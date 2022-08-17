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
* add_node - function to add a node at the beginning of struct
* @head: the first node
* @str: string to be duplicated
* Return: adress of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = _strlen(temp->str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
