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
	ssize_t openf, readf, writef;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	openf  = open(filename, O_RDONLY);
	readf = read(openf, buffer, letters);
	writef = write(STDOUT_FILENO, buffer, readf);

	if (openf == -1 || readf == -1 || writef == -1 || readf != writef)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openf);

	return (writef);
}
