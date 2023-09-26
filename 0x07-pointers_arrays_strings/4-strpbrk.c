#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: char first value
 *@accept: char second value
 *
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int j = 0;

while (*s)
{
while (accept[j] != '\0')
{
if (*s == accept[j])
return (s);
j++;
}
j = 0;
s++;
}
return ('\0');
}
