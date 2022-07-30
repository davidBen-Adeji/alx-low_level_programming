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
	int a = atoi(argv[1]), b = atoi(argv[3]);
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	switch (argv[2][0])
	{
		case '+':
		break;

		case '-':
		break;

		case '*':
		break;

		case '/':
		break;

		case '%':
		break;

		default:
			printf("Error\n");
			exit(99);
	}
	if ((argv[2][0] == '/' && b == 0) || (argv[2][0] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2]);
	printf("%d\n", result(a, b));
	return (0);
}
