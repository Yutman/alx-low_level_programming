#include <stdio.h>

/**
  * main - Print the numbers of base 16 in lowercase
  * Return: Return 0 when program is successful
  */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
