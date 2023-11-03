#include "main.h"

/**
 * read_textfile - a function that read a text file and print it to the POSIX
 *
 * @filename: the buffer to store the file that is successfully read
 * @letters: the number of letters to be read and printed
 *
 * Return: actual number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	ssize_t bytes_written, bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);
	f_d = open(filename, O_RDONLY, S_IRUSR | S_IWUSR);
	if (f_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	bytes_read = read(f_d, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(f_d);
	free(buffer);
	return (bytes_written);
}
