#include "main.h"

/**
  * _strdup - allocates space for a new string
  * @str: dtring to be copied
  * Return: returns NULL if str is NULL
  */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *stringdup;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	stringdup = (char *)malloc(sizeof(char) * size + 1);

	if (stringdup == NULL)
		return (NULL);
	while (i < size)
	{
		stringdup[i] = str[i];
		i++;
	}
	stringdup[i] = '\0';
	return (stringdup);
	free(stringdup);
}
