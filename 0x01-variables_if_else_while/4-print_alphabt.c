#include <stdio.h>

/**
  * main - Print the alphabet in lowercase letters, except for e and q
  * Return: Return 0 when program is successful
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
