#include <stdio.h>

/**
  * main - Print all possible combinations of single digit numbers
  * Return: Return 0 success
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
