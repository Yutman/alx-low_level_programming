#include "main.h"

/**
 * _pow_recursion - raises a number x to power
 *			y
 * @x: input integer
 * @y: power it is raised by
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
