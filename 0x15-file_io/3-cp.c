#include "main.h"
#include <stdio.h>
/**
 * main - Entry point for the cp program.
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments.
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	res = cp(argv[1], argv[2]);
	if (res == -1)
		return (98);
	else if (res == -2)
		return (99);
	else if (res == -3)
		return (100);

	return (0);
}

/**
 * cp - Copies the content of one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 * Return: 0 on success, -1 on failure to read, -2 on failure to write,
 *         -3 on failure to close.
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_to == -1)
	{
		close(fd_from);
		return (-2);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			return (-2);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		return (-3);

	return (0);
}
