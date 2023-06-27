#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses the string recieved.
 *
 * @s: String recieved
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	int r;
	int count = 0;
	char reverse[];

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		reverse[count] = *s
		count++;
		s--;
	}
	for (r = 0; r < length + 1; r++)
		*(s + r) = reverse[r];

}

