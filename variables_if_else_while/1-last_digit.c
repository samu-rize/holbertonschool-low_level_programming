#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program generates a random number and determines the last
 *              digit of that number. It uses the srand function to seed the
 *              random number generator with the current time. The rand function
 *              is then used to generate a random number, which is stored in the
 *              variable 'n'. The last digit of 'n' is determined by taking the
 *              modulo (%) of 'n' with 10 and storing it in the variable 'm'.
 *              The program then uses if-else statements to check the value of
 *              'm' and prints the corresponding message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else
{
if (m == 0)
{
printf("Last digit of %d is 0 and is 0\n", n);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
}
return (0);
}

