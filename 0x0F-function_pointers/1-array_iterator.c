#include <stdlib.h>

/**
* array_iterator - function that executes the function given as a parameter
* @array: name of array
* @size: number of elements in array
* @action: function to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
