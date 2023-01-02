#include "main.h"

/**
 * _memset - replaces the first n bytes of a pointer with a constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be replaced
 *
 * Return: 
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i= 0; i < n; i++)
		s[i] = b;
	
	return (s);
}
