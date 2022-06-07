#include "main.h"

/**
* main - Program that prints _putchar
*
*Return: Always 0 (success)
*/

int main(void)
{
	char putchar[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(putchar[i]);

	_putchar('\n');

	return (0);
}
