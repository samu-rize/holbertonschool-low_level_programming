#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
