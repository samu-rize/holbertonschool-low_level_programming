#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * argc: The number of command-line arguments passed to the program.
 * argv: An array of strings representing the command-line arguments.
 *
 * returns: An integer value indicating the exit status of the program.
 */

int main(int __attribute__ ((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
