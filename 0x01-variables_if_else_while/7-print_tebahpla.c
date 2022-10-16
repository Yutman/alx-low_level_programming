#include <stdio.h>

/**
  * main - Print the alphabet in lowercase letters in reverse
  * Return: Return a 0 if progrm is successful
  */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
