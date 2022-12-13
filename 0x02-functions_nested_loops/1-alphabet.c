#include "main.h"

/**
 * main - Start of code
 *
 * Description: Prints the alphabet in lowercase followed by a new line
 *
 * Return: Always returns 0
 */

int main(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');

	return (0);
}
