#include"main.h"

/**
 * print_square - print a square using #
 * @row: is the width of the square
 * @size: is the size of the square
 * @column: is the height of the square
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; ++row)
	{
		for (column = 1; column <= size; ++column)
			_putchar('#');
		_putchar('\n');
	}
}
