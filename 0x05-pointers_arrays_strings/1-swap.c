/**
 * swap_int - swaps the values of input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
