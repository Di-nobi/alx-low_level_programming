#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, d, fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
{
	for (d = 0; text_content[d] != '\0'; d++)
		;
	p = write(fd, text_content, d);

	if (p == -1)
		return (-1);
}

	close(fd);

	return (1);
}
