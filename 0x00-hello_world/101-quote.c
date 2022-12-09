#include <unistd.h>

/**
 * main - Starting point
 *
 * Description: printing to console with write function
 *
 * Return: returns an error of 1
 *
 */

int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, word, 59);
	return (1);
}
