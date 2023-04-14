#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 * Return: return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	size_t len = strlen(text_content);
	ssize_t wcount = write(fd, text_content, len);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (wcount == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
