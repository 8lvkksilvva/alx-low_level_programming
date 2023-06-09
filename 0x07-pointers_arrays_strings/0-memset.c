#include "main.h"

/**
 * _memset - Entry point
 * @s - pointer: pointed destination
 * @b - buffer: constant byte
 * @n - size: bytes
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
