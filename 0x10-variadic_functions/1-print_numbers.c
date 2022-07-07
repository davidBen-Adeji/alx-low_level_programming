#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_numbers - function that prints numbers followed by a new line
* @separator: string to be printed between numbers
* @n: number of numbers to be printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (separator == NULL || n == 0)
		return;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
	int x = va_arg(arg, int);

	if (i == n - 1)
	{
		printf("%d\n", x);
		break;
	}

	printf("%d%s", x, separator);
	}

	va_end(arg);
}
