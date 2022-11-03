#include "main.h"

/**
 * _sqrt_recursion - a square root meanting for parents
 * @n: integer to be square rooted
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
