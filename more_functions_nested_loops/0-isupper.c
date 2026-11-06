#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 * @c: integer to check
 *
 * Return: 1 if upper, 0 if not.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
