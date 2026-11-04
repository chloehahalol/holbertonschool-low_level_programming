#include "main.h"

/**
 * _isalpha - returns 1 if a letter regardless of case,
 * otherwise returns 0
 * @c: the character to check
 *
 * Return: 1 if letter, 0 if not.
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}

	return (0);
}
