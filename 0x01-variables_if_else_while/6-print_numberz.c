#include <stdio.h>

/**
  * main - Print all single digit numbers using only putchar
  * Return: Return 0 when program is successful
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar(i + '0');

	putchar('\n');

	return (0);
}
