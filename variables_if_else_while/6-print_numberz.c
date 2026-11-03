#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * starting from 0 and followed by a new line.
 *
 * Returns: Returns a 0 upon succession.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	putchar('\n');
	return (0);
}
