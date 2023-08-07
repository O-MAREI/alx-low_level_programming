#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a file and prints to STDOUT.
 * @filename: The file
 * @letters: Letter count
 * Return: Number of bytes OR 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *count;
	ssize_t w, r;

	fp = open(filename, O_RDONLY);

	if (filename == NULL || fp == -1)
		return (0);

	count = malloc(sizeof(char) * letters);
	r = read(fp, count, letters);
	w = write(STDOUT_FILENO, count, r);

	free(count);
	close(fp);

	return (w);
}
