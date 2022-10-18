#include <stdio.h>

/**
  * main - prints all possible different combinations of three digits
  * Return: Return 0 when program is successful
  */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1;  c < 10; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
