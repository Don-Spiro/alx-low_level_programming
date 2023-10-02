#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument
 * @argv: arrays of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
	{
	printf("%d\n", argc++);
	}
return (0);
}

