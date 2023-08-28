#include "main.h"
/**
 * flip_bits -  function that returns the number of bit
 * you would need to flip to get from one number to another
 * @n: number
 * @m: number
 * Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xornum = n ^ m;
	unsigned int count = 0;

	while (xornum)
	{
		xornum &= (xornum - 1);
		count++;
	}

	return (count);
}
