#include "main.h"

/**
 * swap_int – swaps the values of two parameters
 *
 * @*a : first argument
 * @*b : second argument
 *
 */

void swap_int(int *a, int *b)
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
