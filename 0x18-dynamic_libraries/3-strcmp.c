#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first argument
  * @s2: second argument
  * Return: Returns integer difference
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0, result;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
		result = (s1[i] - '0') - (s2[i] - '0');
	else
		result = 0;
	return (result);
}
