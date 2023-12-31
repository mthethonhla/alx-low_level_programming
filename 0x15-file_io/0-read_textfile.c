#include "main.h"

/**
 * read_textfile - function that reads a text file and
 *			prints it to the POSIX standard output.
 * @filename: the filename.
 * @letters: letters is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t newd, newr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	newd = read(file, buffer, letters);
	newr = write(STDOUT_FILENO, buffer, newd);

	close(file);

	free(buffer);

	return (newr);
}
