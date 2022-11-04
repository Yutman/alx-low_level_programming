#include "main.h"

/**
 * is_prime_number - Checks if input integer
 *			is prime
 *
 * @n: input integer
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (whether_prime(n, 2));
}

/**
 * whether_prime - checks whether number is prime
 * @a: integer being checked
 * @b: possible divisors
 * Return: 1 if prime, 0 otherwise
 */
int whether_prime(int a, int b)
{
	if (a % b == 0)
		return (0);
	else if (b * b > a)
		return (1);
	return (whether_prime(a, b + 1));
}
