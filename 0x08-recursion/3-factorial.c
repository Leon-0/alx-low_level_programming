#include "main.h"

/**
 * factorial - returns te factorial of a given number
 * @n: given number
 * Return: triggers for further processing
 */

int factorial(int n)
{
if (n < 1)
{
	return (-1);
}
else if (n == 0)
{
	return (1);
}
else
{
	return (n * factorial(n - 1));
}
}
