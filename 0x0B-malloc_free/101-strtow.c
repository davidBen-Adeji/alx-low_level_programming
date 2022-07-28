#include <stdlib.h>

/**
* strtow - function that splits a string into words
* @str: string to be split
* Return: the 2 dimensional array
*/

char **strtow(char *str)
{
	char **new_string;
	int i, j, k, l = 0, m = 0, len = 0, a_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[m] != '\0')
	{
		if (str[m] != ' ' || str[m] != '\t')
		{
			if (str[m + 1] == ' ' || str[m + 1] == '\t' || str[m + 1] == '\0')
				len++;
		}
		m++;
	}

	if (len == 0)
		return (NULL);

	m = 0;

	new_string = malloc(sizeof(char *) * (len + 1));
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		a_len = 0;
		while (str[m] != '\0')
		{
			if (str[m] != ' ' || str[m] != '\t')
			{
			a_len++;
			if (str[m + 1] == ' ' || str[m + 1] == '\t' || str[m + 1] == '\0')
			{
			m++;
			break;
			}
			}
			m++;
		}

		new_string[i] = malloc(sizeof(char) * (a_len + 1));
		if (new_string[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(new_string[k]);

			free(new_string);
			return (NULL);
		}

		for (j = 0; j < a_len; j++)
		{
			while (str[l] != '\0')
			{
			if (str[l] != ' ' || str[l] != '\t')
				break;

			l++;
			}

			new_string[i][j] = str[l];

			if (str[l + 1] == ' ' || str[l + 1] == '\t')
			{
				new_string[i][j + 1] = '\0';
				l++;
				break;
			}
			l++;
		}
	}

	new_string[i] = NULL;

	return (new_string);
}
