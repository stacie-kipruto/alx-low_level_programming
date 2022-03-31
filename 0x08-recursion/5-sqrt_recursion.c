#include "main.h"

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number in question
 *
 * Return: square of n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n == (int)sq_root(n) * (int)sq_root(n))
		return (sqrt(n));

	else
		return (-1);
}
