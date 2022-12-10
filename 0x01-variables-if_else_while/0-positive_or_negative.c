#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start
 *
 * Description: prints if a value is 0, negative or positive
 *
 * Return: always 0
 */

int main(void)
{
	int n

	srand(time(0))
	a = rand() - RAND_MAX / 2;

	/*CODE*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
