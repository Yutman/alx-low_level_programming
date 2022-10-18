#include "main.h"

/**
  * print_to_98 - takes integer n and prints from n to 98
  * @n: parameter of print_to_98 fuction
  * Return: returns values from n to 98
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}

	}
	printf("%d\n", n);
}
