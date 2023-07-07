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

int main(int argc, char *argv)
{
	int i, s = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
