#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	while (length != 0)
	{
		s--;
		_putchar(*s);
		length--;
	}

	_putchar('\n');
}
