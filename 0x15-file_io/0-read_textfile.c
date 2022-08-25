#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

/**
* read_textfile - function to read a text file
* @filename: name of file
* @letters: number of bytes to read
* Return: length of the chars
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (filename == NULL || buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr == -1|| rd != wr)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
