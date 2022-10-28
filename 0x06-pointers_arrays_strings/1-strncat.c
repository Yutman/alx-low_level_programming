#include "main.h"

/**
  * *_strncat - function that concatenates two strings
  * @dest: first argument
  * @src: second argument
  * @n: third argument
  * Return: returns a n bytes of a string from src
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*(dest + i) != '\0')
		i++;

	for (j = 0; *(src + j) != '\0' && j < n; j++)
		*(dest + (i +  j)) = *(src + j);

	return (dest);
}
