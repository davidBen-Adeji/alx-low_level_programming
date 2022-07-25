#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array
* @nmemb: number of elements in the array
* @size: the size for each element
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *aux;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	aux = ptr;

	for (i = 0; i < (size * nmemb); i++)
		aux[i] = 0;

	return (ptr);
}
