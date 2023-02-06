#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content to be written inside the file.
 *
 * Return: 1 if successful; otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i; /** number of letters */
	int rw;


	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++) /** using for loop */
		;

	rw = write(fd, text_content, i);

	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}

