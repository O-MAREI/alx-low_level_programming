#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations
 * fir 2 digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i <= 56; i++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > i)
			{
				putchar(i);
				putchar(n);
				if (i != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
