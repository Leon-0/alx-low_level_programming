/**
 * _memset - replaces the first bytes with a constant
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be replaced
 *
 * Return: pointer to memory at s
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
