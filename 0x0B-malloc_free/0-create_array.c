#include <stdlib.h>

/**
* create_array - function to create an array of characters
* @size: number of elements in array
* @c: character to be used
* Return: pointer to string
*/

char *create_array(unsigned int size, char c)
{
	char *s = malloc((size + 1) * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return (s);
}
