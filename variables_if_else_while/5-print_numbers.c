#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints all single-digit numbers of base 10,
 * starting from 0, followed by a newline character. It uses a for loop to
 * iterate from 0 to 9. Inside the loop, it uses the putchar() function
 * to print each digit by converting it to its corresponding character
 * representation. The expression `(i % 10) + '0'` converts the numerical
 * value of the digit to its ASCII character representation. Finally, a
 * newline character is printed to start a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
putchar('\n');
return (0);
}
