#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: content written in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	wr = write(fd, text_content, len);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
