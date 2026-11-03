#include "main.h"

/**
 * print_alphabet - writes the alphabet
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

/**
 * main - calls a function to print the alphabet.
 *
 * Return: On success 0.
 */
int main(void)
{
        print_alphabet();
        return (0);
}

