#include "main.h"

/**
 * leet - prints a sentence in leet
 * @s: the string to translate
 *
 * Return: the string in leet
 */
char *leet(char *s)
{
	char numbers[] = "4307143071";
	char letters[] = "aeotlAEOTL";
	int i;
	int j;

	i = 0;

	/*Check the whole string*/
	while (s[i] != '\0')
	{
		/*Check string if it has letters*/
		for (j = 0; letters[j] != '\0'; j++)
		{
			/*Found letter*/
			if (s[i] == letters[j])
			{
				/*Replace letter*/
				s[i] = numbers[j];
			}
		}
		i++;
	}
	return (s);
}
