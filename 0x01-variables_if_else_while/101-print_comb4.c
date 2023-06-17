#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Outputs all possible combinations of 3 digits,
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;
	int m; 

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (m > n && l > m)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

