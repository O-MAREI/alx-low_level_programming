#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes.
 * @argc: Number of arguments.
 * @argv: The arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int codes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	codes = atoi(argv[1]);

	if (codes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < codes; i++)
	{
		if (i == codes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
