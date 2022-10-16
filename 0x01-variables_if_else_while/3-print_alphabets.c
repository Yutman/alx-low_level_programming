#include <stdio.h>

/**
  * main - Start of program
  * Return: Return 0 when program is successful
  */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}
