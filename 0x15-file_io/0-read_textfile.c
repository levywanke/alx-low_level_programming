#include "main.h"

/**
 * read_textfile - function that reads the file contents
 * @filename:name of the file read
 * @letters:number of size
 *
 * Return:returns(0) when null (1) on success and (-1) on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);
	write(STDOUT_FILENO, buffer, bytes_read);

	return (bytes_read);
}
