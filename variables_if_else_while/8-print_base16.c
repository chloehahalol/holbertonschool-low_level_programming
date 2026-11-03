#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i;

	/* Prints 0-9 using ASCII values */
	for (i = 48; i < 58; i++)
		putchar(i);

	/* Prints a-f using ASCII values */
	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
