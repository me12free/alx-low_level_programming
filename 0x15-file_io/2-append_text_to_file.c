#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 *  Return: If filename is NULL return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");
	size_t len = strlen(text_content);
	size_t written = fwrite(text_content, sizeof(char), len, file);

	if (filename == NULL)
	{
		return (-1);
	}
	if (file == NULL)
	{
		return (-1);
	}
	fclose(file);
	return ((written == len) ? 1 : -1);
}
