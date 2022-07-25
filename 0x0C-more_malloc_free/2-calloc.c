#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array
* @nmemb: number of elements in the array
* @size: the size for each element
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0)
	{
		return (ptr);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (ptr);

	return (ptr);
}
