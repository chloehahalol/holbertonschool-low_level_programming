#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * and prints a new line at the end.
 */
void print_alphabet_x10(void)
{
	int i;
	i = 97;

	while (i < 122)
	{
		_putchar(i); 
		i++;
	}
	_putchar('\n'); 
}
