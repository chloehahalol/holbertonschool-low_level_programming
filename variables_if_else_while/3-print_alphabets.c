#include <stdio.h>

/*
 * main - prints the alphabet in lower case, and then
 * in upper case, followed by a new line.
 *
 * Return: 0 if successful.
*/
int main(void)
{
	char lower_letter;
	char upper_letter;
	int i;

	lower_letter = 'a';
	upper_letter = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(lower_letter);
		lower_letter++;
	}

	for (i = 0; i < 26; i++)
	{
		putchar(upper_letter);
		upper_letter++;
	}

	putchar('\n');
	return (0);
}
