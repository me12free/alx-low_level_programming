#include "main.h"
#include <stdio.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: pointer to the name of the file
 * @letters: etters it could read and print.
 *
 * Return: if filename is NULL, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	FILE *file = fopen(filename, "r");
	size_t read = fread(buffer, sizeof(char), letters, file);
	size_t written = fwrite(buffer, sizeof(char), read, stdout);

	if (buffer == NULL)
	{
		return (0);
	}
	if (file == NULL)
	{
		free(buffer);
		return (0);
	}

	if (read != letters)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (written);
}
