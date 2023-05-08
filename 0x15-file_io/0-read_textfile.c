#include "main.h"
/**
 * read_textfile -function that reads a text file and prints
 *									it to the POSIX standard output
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed, or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t tu;
	ssize_t wr;
	ssize_t funcd;
	char *buffer;

	funcd = open(filename, O_RDONLY);

	if (funcd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	tu = read(funcd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, tu);

	free(buffer);
	close(funcd);
	return (wr);
}
