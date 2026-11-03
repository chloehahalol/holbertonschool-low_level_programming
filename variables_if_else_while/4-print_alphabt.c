#include <stdio.h>

/**
* main - prints the alphabet in lower case
* except letters q and e.
* return: returns 0 on success.
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
