#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * starting from 0.
 * Return: Returns 0 upon succession.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
