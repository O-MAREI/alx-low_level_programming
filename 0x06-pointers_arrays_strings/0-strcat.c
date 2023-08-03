#include "main.h"

/**
 * _strcat: Concatenates strings.
 * @dest: First string.
 * @src: Second string.
 *
 * Return: The concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
