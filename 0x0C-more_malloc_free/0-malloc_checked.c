#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc
* @b: the amount of memory to be allocated
* Return: a pointer to the the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
