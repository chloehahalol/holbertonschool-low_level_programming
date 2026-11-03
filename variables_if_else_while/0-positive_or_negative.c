#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Generates a random number and outputs whether it is
 * a positive number, negative number or if it is equal to 0.
 *
 * Return: 0 on success.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
