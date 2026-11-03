#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * followed by a new line.
 *
 * Return: 0 if successful.
*/
int main(void)
{
	char letter;
	int i;

	letter = 'a';

	for (i = 0; i < 26; i++)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
