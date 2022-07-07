#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function to print strings
* @separator: what strings should be separated by
* @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
	char *x = va_arg(arg, char *);

	if (x == NULL)
		printf("(nil)");
	else
		printf("%s", x);

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}

	va_end(arg);

	printf("\n");
}
