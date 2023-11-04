#include "main.h"

/**
 * create_file - a function that creates file
 *
 * @filename: the buffer to store the file that is successfully read
 * @text_content: the null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content);
{
	int f_d;
	ssize_t bytes_written;
	int count;

	if (filename == NULL)
		return (-1);
	f_d = open(filename, O_CREAT | O_RDONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_d == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (count =0; text_content[count] != '\0'; count++)
		bytes_written = write(f_d, text_content, count);
	if (byes_written == -1)
		return (-1);
	close(f_d);
	return (1);
}
