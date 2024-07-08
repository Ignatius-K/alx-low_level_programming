#include "holberton.h"

/**
 * read_textfile - a function that reads text file
 *
 * @fname: file to read
 * @letters: number of letters to read
 *
 * Return: letters
*/
ssize_t read_textfile(const char *fname, size_t letters)
{
	int file;
	ssize_t read_check, wcount;
	char *buffer;

	if (fname == NULL)
		return (0);

	file = open(fname, O_RDONLY);

	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_check = read(file, buffer, letters);
	if (read_check == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, read_check);
	if (wcount == -1 || read_check != wcount)
		return (0);
	free(buffer);
	close(file);
	return (wcount);
}
