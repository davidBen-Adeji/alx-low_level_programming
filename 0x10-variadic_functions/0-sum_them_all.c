#include <stdarg.h>

/**
* sum_them_all - function to sum all of its paremeters
* @n: number of parameters to be added
* Return: sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(arg, int);

		sum += x;
	}

	va_end(arg);

	return (sum);
}
