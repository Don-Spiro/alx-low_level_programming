#include "main.h"

/**
 * get_endianness - function that checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *)&a;

	if (*c)
		return (1);
	return (0);
}
