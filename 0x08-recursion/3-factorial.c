#include "main.h"
/**
 * factorial - function that returs factorial of a given number
 * @n: number to return
 *
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
