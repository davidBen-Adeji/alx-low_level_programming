#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - returns pointer to previously written functions
* @s: operator passed
* Return: funtion
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 6)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
