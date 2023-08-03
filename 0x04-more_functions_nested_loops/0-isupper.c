#include "main.h"

/**
 * _isupper - Checks if the character is uppercase.
 * @c: The character's ASCII value.
 *
 * Return: 1 if upper || 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
