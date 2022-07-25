#include <stdlib.h>

/**
* array_range - function that creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: pointer to the array of integers
*/

int *array_range(int min, int max)
{
	int *range;
	int i = 0;

	if (min == max)
	{
		range = malloc(sizeof(int));
		range[i] = min;
		return (range);
	}
	else if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * ((max) - (min) + 1));
	if (range == NULL)
		return (NULL);

	while (min <= max)
	{
		range[i] = min;
		i++;
		min++;
	}

	return (range);
}
