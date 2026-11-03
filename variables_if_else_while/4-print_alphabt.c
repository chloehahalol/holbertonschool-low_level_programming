#include <stdio.h>

/**
 * main - Prints the alphabet in lower case except
 * letters q and e.
 *
 * Return: Returns 0 on success
 */
int main(void)
{
	char letter;
	int i;

	letter = 'a';

	for (i = 0; i < 26; i++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
			letter++;
		}
		else
			letter++;
	}

	putchar('\n');

	return (0);
}
