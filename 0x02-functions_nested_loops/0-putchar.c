#include "main.h"

/**
  * main -prints putchar followed by a newline
  * Return: Return 0 when successful
  */

int main(void)
{
	int i;
	char p[] = "_putchar";

		for (i = 0; i < 8; i++)
		{
			putchar(p[i]);
		}
	putchar ('\n');
	return (0);
}

