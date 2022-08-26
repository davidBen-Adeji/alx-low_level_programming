#include "main.h"
#include <stdlib.h>

/**
* append_text_to_file - function to append a text to a file
* @filename: name of file
* @text_content: text to be appended
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len] != '\0')
			len++;

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
