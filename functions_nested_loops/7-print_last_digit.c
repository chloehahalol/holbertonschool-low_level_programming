#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer.
 * @n: The integer
 *
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar('0' + last);

	return (last);
}
