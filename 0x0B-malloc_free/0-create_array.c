#include <stdlib.h>

/**
* create_array - function to create an array of characters
* @size: number of elements in array
* @c: character to be used
* Return: pointer to string
*/

char *create_array(unsigned int size, char c)
{
	char *s = malloc((size) * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
