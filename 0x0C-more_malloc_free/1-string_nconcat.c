#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: string to concatenated to
* @s2: string to concatenate from
* @n: number of bytes of s2
* Return: the newly concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string, *aux_s1 = s1, *aux_s2 = s2;
	unsigned int i, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		new_string = malloc(sizeof(char) * 1);
		*new_string = '\0';
		return (new_string);
	}
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0')
		len_s1++, s1++;

	while (*s2 != '\0')
		len_s2++, s2++;

	if (n < len_s2)
		len_s2 = n;

	new_string = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < (len_s1 + len_s2); i++)
	{
		if (i < len_s1)
			new_string[i] = *aux_s1++;
		else
			new_string[i] = *aux_s2++;
	}

	new_string[i] = '\0';
	return (new_string);
}
