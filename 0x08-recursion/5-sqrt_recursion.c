#include "main.h"

/**
 * _sqrt_recursion - finds natural squareroot of
 *			a number
 * @n: the number
 * Return: its square root. -1 if it has none.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);
	return (find_root(1, n));
}

/**
 * find_root - guesses possible square roots of
 *		a number
 * @a: the guesses
 * @b: teh input integer
 * Return: square root. -1 if it has none.
 */

int find_root(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (find_root(a + 1, b));
}
