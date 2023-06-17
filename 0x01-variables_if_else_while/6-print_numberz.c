#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints char 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for (i = 0; i < 9; i++)
	{
		putchar((char)i);
	}
	putchar('\n');
}
