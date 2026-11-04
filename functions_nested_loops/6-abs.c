#include "main.h"

/**
 * _abs - returns the absolute value of an integer.
 * @n: the integer you are checking.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
