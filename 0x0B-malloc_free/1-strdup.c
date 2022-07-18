#include <stdlib.h>

/**
* _strdup - function to duplicate a string
* @str: string to be duplicated
* Return: the cloned string
*/

char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *s, *aux = str;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		len++;
		str++;
	}

	str = aux;
	s = malloc((len + 1) * sizeof(char));
	aux = s;

	if (s != NULL)
	{
		while (i < len)
		{
			*s = *str;
			s++;
			str++;
			i++;
		}
		*s = '\0';

		return (aux);
	}
	else
		return (NULL);
}
