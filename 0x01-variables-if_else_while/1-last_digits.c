#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 *
 * Description: print if n is greater than
 * 	 0, not less than 6
 *
 * Return: always 0
 */

int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*CODE*/
	digit = n % 10;

	if (digit > 5)
		printf
