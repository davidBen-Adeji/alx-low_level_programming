#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - check code
* @argc: argument count
* @argv: argument vector
* Return: pointer to function
*/
int main(int argc, char **argv)
{
	int a, b;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*(argv[2]) == '+' || *(argv[2]) == '-' || *(argv[2]) == '*'
	|| *(argv[2]) == '/' || *(argv[2]) == '%') && *(argv[2] + 1) == '\0')
	{

	if ((*(argv[2]) == '/' && *(argv[3]) == '0')
	|| (*(argv[2]) == '%' && *(argv[3]) == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = get_op_func(argv[2]);

	printf("%d\n", result(a, b));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
