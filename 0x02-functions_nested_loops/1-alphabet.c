#include "main.h"

/**
 * print_alphabet - uses -putchar and a for loop to print the alphabet
 *
 */

void print_alphabet(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
