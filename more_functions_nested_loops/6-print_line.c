#include "main.h"

/**
 * print_line - prints a line
 * @n: how long the line should be
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
		_putchar('_');
		}
	}

	_putchar('\n');
}
