#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
    return square_root_helper(x, 0, x);
}


/**
 * square_root_helper - find square root
 * @n: int to find square root
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * Return: int
 */


int square_root_helper(int n, int low, int high)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;
    int mid_squared = mid * mid;

    if (mid_squared == n)
    {
        return mid;
    }
    else if (mid_squared > n)
    {
        return square_root_helper(n, low, mid - 1);
    }
    else
    {
        return square_root_helper(n, mid + 1, high);
    }
}





