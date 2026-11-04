#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * and prints a new line at the end.
 */
void print_alphabet_x10(void)
{
	int i;
	int count;

	count = 0;

	while (count < 11)
	{
		count++;
		i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
