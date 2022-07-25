#include <stdlib.h>

/**
* _realloc - function that reallocates a memory block using malloc
* @ptr: pointer to previously allocated memory
* @old_size: previously allocated space
* @new_size: newly allocated space
* Return: a pointer to newly allocated space
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *aux_ptr, *new_ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	aux_ptr = malloc(new_size);
	new_ptr = ptr;

	if (old_size > new_size)
		old_size = new_size;


	for (i = 0; i < old_size; i++)
		aux_ptr[i] = new_ptr[i];

	free(ptr);
	return (aux_ptr);
}
