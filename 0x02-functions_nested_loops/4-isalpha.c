#include <ctype.h>
#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: The character in ASCII code
  * Returns: Returns 1 if character is an alphabet, otherwise 0
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
			{
			return (1);
			}
			else
			{
			return (0);
			}
			_putchar('\n');
}
