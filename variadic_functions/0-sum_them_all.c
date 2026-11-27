#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: integer
 *
 * Return: total of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int total = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(args, n);

		while (i < n)
		{
			total = total + va_arg(args, int);
			i++;
		}

		va_end(args);
	}
	return (total);
}
