#include "main.h"

/**
 * get_bit - function that gets a bit at index
 * @n: number to get bit from
 * @index: index where the bit get at
 *
 * Return: value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int maxi = 0x01;

maxi <<= index;
if (maxi == 0)
return (-1);

if ((n & maxi))
return (1);
else
return (0);
}
