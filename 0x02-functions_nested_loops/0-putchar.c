#include "main.h"

/**
 * main - Start of code
 *
 * Description: prints _putchar to the console
 *
 * Return: always returns 0
 *
 */

int main(void)
{
	int count;
	char text[] = "_putchar";

	for (count=0; count<8; count++)
	{
		_putchar(text[count]);
	}
	_putchar('\n');

	return(0);
}
