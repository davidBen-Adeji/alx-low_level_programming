#include "main.h"

/**
 * _islower - function to check for lower case characters.
 * @c: The parameter
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
