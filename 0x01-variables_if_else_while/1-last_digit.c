#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Start of program
 * Return: Returns 0 when program is successful
 */
int main(void)
{

	int n, LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;
	if (LD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	}
	else if (LD == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (LD < 6 && LD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	}
	return (0);
}
