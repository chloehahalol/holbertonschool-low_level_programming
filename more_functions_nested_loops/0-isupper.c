#include "main.h"

/**
 * _isupper: returns based on the number value
 * @c: integer to check
 *
 * Return: 1 if upper, 0 if not.
 */
int _isupper(int c)
{
	if (64 < c && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
