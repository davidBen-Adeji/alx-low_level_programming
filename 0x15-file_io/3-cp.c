#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buff(char *filename);
void close_file(int fd);

/**
* main - check the code
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char **argv)
{
	int fd_from, fd_to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to");
		exit(97);
	}

	buff = create_buff(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	rd = read(fd_from, buff, 1024);
	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0600);

	do {
		if (fd_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(fd_to, buff, rd);

		if (fd_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			close_file(fd_from);
			free(buff);
			exit(99);
		}

		rd = read(fd_from, buff, 1024);
		fd_to = open(argv[2], O_RDWR | O_APPEND);
		} while (rd < 0);

	free(buff);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
* create_buff - function to allocate 1,024 bytes of memory
* @filename: argv[2]
* Return: allocated memory
*/

char *create_buff(char *filename)
{
	char *buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
* close_file - function to close a file
* @fd: file descriptor
* Return: nothing
*/

void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
