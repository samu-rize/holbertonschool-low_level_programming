#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	int i, j, s = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; *arg != '\0'; j++)
		{
			if ((arg[j] < '0' || arg[j] > '9') || !(arg[j] > 0 && arg[j] < 9))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(arg);
	}
	printf("%d\n", s);
	return (0);
}
