#include "main.h"
/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, p, d;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != 0)
{
	for (d = 0; text_content[d] != '\0'; d++)
		;
	p = write(fd, text_content, d);

	if (p < 0)
		return (-1);
}

close(fd);

return (1);
}
