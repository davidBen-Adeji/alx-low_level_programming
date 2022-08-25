#include "main.h"
#include <stdlib.h>

/**
* create_file - function to create a file
* @filename: name of file to be created
* @text_content: content to be written
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
