#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'Outputs all the alphabet in lowercase.'
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 33; i < 59; i++)
	{	
		if (i == 58)
		{
			putchar("%d\n",i);
		}
		else
		{
			putchar(i);
		}
	}
	return (0);
}
