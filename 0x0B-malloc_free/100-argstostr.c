#include <stdlib.h>

/**
* argstostr - function to cancatenate all arguments of the main program
* @ac: number of arguments
* @av: array of arguments
* Return: the concatenated arguments
*/

char *argstostr(int ac, char **av)
{
	char *new_string;
	int i, j, k = 0, len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
	}
	len++;

	new_string = malloc(sizeof(char) * len);

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			new_string[k] = av[i][j];
			k++;
			j++;
		}

		new_string[k] = '\n';
		k++;
	}

	new_string[k] = '\0';

	return (new_string);
}
