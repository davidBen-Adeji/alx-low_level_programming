#include <stdlib.h>

/**
* power - function to raise a number
* @a: num
* @b: num2
* Return: number raised
*/

unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int num, mul = a;

	if (b == 0)
		return (1);
	else if (b == 1)
		return (a);

	for (num = 1; num < b; num++)
		mul = mul * a;

	return (mul);
}

/**
* binary_to_uint - function that converts binary to integer
* @b: string of 0 and 1 chars
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int index, num = 0, sum = 0, k = 0, len = 0, i, r;

	if (b == NULL)
		return (0);

	while (b[k] != '\0')
	{
		if (b[k] == '1' || b[k] == '0')
			len++;
		else
			return (0);

		k++;
	}

	index = len - 1;

	for (i = 0; i < len; i++)
	{
		num = 0 + b[i] - '0';
		r = power(2, index);
		sum = sum + (num * r);
		index = index - 1;
	}

	return (sum);
}
